#include "JudgeBrightness.h"

JudgeBrightness::JudgeBrightness()
{

}

void JudgeBrightness::setParam(double brcn[0])
{
    double mBrightkids = brcn[0];
}

void JudgeBrightness::init()
{

}

bool JudgeBrightness::judgement()
{
    if(mBrightkids < 0)
    {
        if(mBrightkids<=mBrightness->getValue())
        {
            return true;
        }
    }
    else
    {
        if(mBrightkids>=mBrightness->getValue())
        {
            return true;
        }
    }
    return false;

}
