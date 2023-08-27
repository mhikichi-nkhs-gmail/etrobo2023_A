#include "TurnWalker.h"

TurnWalker::TurnWalker(Odometry *odo,
                        SpeedControl *scon):
    SimpleWalker(odo,scon)
{

}

void TurnWalker::execStart()
{
    mCurrentLen = mLength->getValue();
    //printf("current%f\n", mCurrentLen);
    val1 = mTargetLen - mCurrentLen;
    //printf("val1%f\n", val1);
    mTurn = calcTurn();

    setCommand((int)mTargetSpeed, (int)mTurn);

    SimpleWalker::execStart();
}

void TurnWalker::setParam(double power[])
{
    mTargetSpeed = 0;
    mTarget = 0;

    mCurve = power[0];
  
    mPid->setTarget(mTarget);
}

double TurnWalker::calcTurn()
{
    double val1_turn = mPid->getOperation(val1);
    //printf("val1%f\n", val1_turn);

    setBias(mCurve);
    double turn =  val1_turn+mBias;
    printf("turn%f,,\n", turn);
   
    return turn;
}

void TurnWalker::setBias(double curve) //カーブパラム
{
    mBias = curve;
}

void TurnWalker::init()
{
    mTargetLen = mLength->getValue();
    //printf("target%f\n", mTargetLen);
}