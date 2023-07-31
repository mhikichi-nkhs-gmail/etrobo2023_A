#include "JudgeTurnAngle.h"

JudgeTurnAngle::JudgeTurnAngle():
    Judge()
{

}

void JudgeTurnAngle::setParam(double tucn[])
{
    mTurnkids = tucn[0];
    memoAng = tucn[1];
}

void JudgeTurnAngle::init()
{

    mdirect = true;
    mTurnkids = mTurnAngle->getValue() + mTurnkids;

    if(mTurnkids < mTurnAngle->getValue())
    {
        mdirect = false;
    }
}

bool JudgeTurnAngle::judgement()
{
    if(mdirect)
    {
        if(mTurnkids<=mTurnAngle->getValue())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        if(mTurnkids>=mTurnAngle->getValue())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}