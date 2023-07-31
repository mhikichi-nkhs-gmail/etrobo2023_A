#include "JudgeBrightness.h"

JudgeBrightness::JudgeBrightness():
    Judge()
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
    if(mBrightkids<=mBrightness->getValue())
    {
        return true;
    }
    return false;

}
