#include "VirCurveLine.h"
#include "math.h"

VirCurveLine::VirCurveLine(Odometry *odo,
                        SpeedControl *scon):
    SimpleWalker(odo,scon),
    mSpeed(0),
    mLeftEdge(true),
    mLimit(100),
    mBias(0)
{

}

void VirCurveLine::run()
{
    //calcSenoer();
    //calcSenter();
    calcSenoer();
    calcLength();
    mTurn = calcTurn();

    setCommand((int)mTargetSpeed, (int)mTurn);

    SimpleWalker::run();
}

double VirCurveLine::calcTurn()
{
     double val2;
    //printf("RRR%f\n",R);
    if(mradius > 0)
    {
        val2 = mradius - R;
    }
    else
    {
        val2 = mradius + R;
    }

    printf("val2,,%f,,\n", val2);
    double val2_turn = mPid->getOperation(val2);

    //printf("val2_turn,,%f,,", val2_turn);

    if(mradius) val2_turn = -val2_turn;
    setBias(mCurve);
    double turn =  val2_turn+mBias;
   
    return turn;
}

void VirCurveLine::setParam(double vcurve[])
{
    //setParam(vcurve[0],vcurve[1],vcurve[2],vcurve[3],vcurve[4],vcurve[5]);  //速さ,半径,旋回角度,P,I,D
    //printf("XXXXXX\n");
    mradius = vcurve[1];

    mTargetSpeed = vcurve[0];
    mTarget = 0;
    mCurve = vcurve[2];
    mPFactor = vcurve[3];
    mIFactor = vcurve[4];
    mDFactor = vcurve[5];

  
    mPid->setTarget(mTarget);
    mPid->setKp(mPFactor); 
    mPid->setKi(mIFactor);
    mPid->setKd(mDFactor);
   
}

void VirCurveLine::setEdgeMode(bool isLeftEdge)
{
    mLeftEdge = isLeftEdge;
}

bool VirCurveLine::getEdgeMode()
{
    return mLeftEdge;
}

void VirCurveLine::setLimit(double limit)
{
    mLimit=limit;
    mPid->setLimit(limit);
}

bool VirCurveLine::isLeftEdge()
{
    return mLeftEdge;
}

void VirCurveLine::setBias(double curve) //カーブパラム
{
    mBias = curve;
}

void VirCurveLine::addBias(double add) //カーブパラム
{
    mBias += add;
}

void VirCurveLine::printInfo()
{
    msg_log("VirCurveLineTracer");
}

void VirCurveLine::init()
{
    printf("ABC\n");
    calcSenter();
}

void VirCurveLine::execStart()
{
    run();
}

void VirCurveLine::calcSenter() //中心座標の特定
{
    double angle1 = (mAngle->getValue())*M_PI/180;

    mx = mXpos->getValue();
    my = mYpos->getValue();

    if(mradius > 0)
    {
        centerx = (mradius * -sin(angle1)) +  mx;
        centery = (mradius * cos(angle1)) +  my;
    }
    else
    {
        centerx = (mradius * -sin(angle1)) +  mx;
        centery = ((mradius * cos(angle1)) +  my) * -1;

    }

    printf("X,,%f\n", centerx);
    printf("Y,,%f\n", centery);

}

void VirCurveLine::calcLength() //走行体と中心座標との半径
{
    //mx = mXpos->getValue();
    //my = mYpos->getValue();
    R = sqrt((centerx - xsensor) * (centerx - xsensor) + (centery - ysensor) * (centery - ysensor));
    printf("R%f\n", R);
}

void VirCurveLine::calcSenoer() //センサーの場所
{
    double angle2 = (mAngle->getValue())*M_PI/180;
    maddsensor = 5;
    
    mx = mXpos->getValue();
    my = mYpos->getValue();
    xsensor = maddsensor * cos(angle2) + mx;
    ysensor = maddsensor * sin(angle2) + my;
    //printf("xsensor,,%f\n", xsensor);
    //printf("ysensor,,%f\n", ysensor);
}
