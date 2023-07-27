#include "LengthCondition.h"

LengthCondition::LengthCondition():
    Judge()
{

}

void LengthCondition::setParam(double lencn[])
{
    mLengthkids = lencn[0];
}

void LengthCondition::init()
{
    mdirect = true;
    mLengthkids = mLength->getValue() + mLengthkids;
    if(mLengthkids < mLength->getValue())
    {
        mdirect = false;
    }

}

bool LengthCondition::judgement()
{
    if(mdirect)
    {
        if(mLengthkids<=mLength->getValue())
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
        if(mLengthkids>=mLength->getValue())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
