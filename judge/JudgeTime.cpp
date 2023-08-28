#include "JudgeTime.h"

double time;

JudgeTime::JudgeTime()
{

}

void JudgeTime::setParam(double ticn[])
{
    mTime = ticn[0];
}

void JudgeTime::init()
{
    time = 0.0;
}

bool JudgeTime::judgement()
{
    printf("time judge\n");
    if(mTime <= time)
    {
        return true;
    }
    time = time + 1.0;
    return false;
}