#include "VirStraightLine.h"
#include "math.h"

VirStraightLine::VirStraightLine(Odometry *odo,
                        SpeedControl *scon):
    SimpleWalker(odo,scon),
    mBias(0)
{
}

void VirStraightLine::run()
{
    targetPoint();
    calcSenoer();
    val1 = targetLine();
    mTurn = calcTurn();
    setCommand((int)mTargetSpeed, (int)mTurn);

    SimpleWalker::run();
}

double VirStraightLine::calcTurn()
{
    double val2_turn = mPid->getOperation(val1);
    setBias(mCurve);
   
    return val2_turn;
}

void VirStraightLine::setParam(double vstraight[]) //速度,角度,0,P,I,D
{
    //printf("Angle%f,,\n",(mAngle->getValue()));
    mTargetSpeed = vstraight[0];
    mSetAngle = vstraight[1] + JudgeTurnAngle::MEMOANG;
    mTarget = vstraight[2];
    mPFactor = vstraight[3];
    mIFactor = vstraight[4];
    mDFactor = vstraight[5];
  
    mPid->setTarget(mTarget);
    mPid->setKp(mPFactor); 
    mPid->setKi(mIFactor);
    mPid->setKd(mDFactor);
}

void VirStraightLine::setBias(double curve) //カーブパラム
{
    mBias = curve;
}

void VirStraightLine::init()
{
    if(mTargetSpeed > 0)
    {
        mSetAngle = mSetAngle + (mAngle->getValue());
        printf("Angle%f,,\n",(mAngle->getValue()));
    }
    else
    {
        mSetAngle = mSetAngle + ((mAngle->getValue()) * -1);
        printf("Angle%f,,\n",(mAngle->getValue()));
    }
}

void VirStraightLine::execStart()
{
    run();
}

void VirStraightLine::targetPoint() //進行方向
{
    mx = mXpos->getValue();
    my = mYpos->getValue();
    double angle1 = mSetAngle*(M_PI/180);
    mtx = cos(angle1) + mx; 
    mty = sin(angle1) + my;
}

void VirStraightLine::calcSenoer() //センサー位置
{
    double angle2 = (mAngle->getValue())*(M_PI/180);
    maddsensor = 5;

    if(mTargetSpeed < 0)
    {   
        angle2 = angle2 * -1;
        maddsensor = maddsensor * -1;
    }

    //printf("angle2,,%f\n",angle2);

    mx = mXpos->getValue();
    my = mYpos->getValue();

    msx = maddsensor * cos(angle2) + mx;
    msy = maddsensor * sin(angle2) + my;
}

double VirStraightLine::targetLine()
{
    mLine = (mty - my) * msx - (mtx - mx) * msy + (mtx * my) - (mty * mx);  

    return mLine;
}
