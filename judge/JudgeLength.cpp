#include "JudgeLength.h"

JudgeLength::JudgeLength():
    Judge()
{
    //printf("const%d\n",mState);
}

void JudgeLength::setParam(double lencn[])
{
    mLengthkids = lencn[0];
}

void JudgeLength::init()
{
    mdirect = true;
    mLengthkids = mLength->getValue() + mLengthkids;

    //printf("mdirect%d\n",mdirect);
    //printf("mlengthkids%f\n",mLengthkids);
    //printf("mlengthget%f\n",mLength->getValue());
    if(mLengthkids < mLength->getValue())
    {
        mdirect = false;
    }

}

bool JudgeLength::judgement()
{
    printf("mdirect%d\n",mdirect);
    printf("mlengthkids%f\n",mLengthkids);
    printf("Lastmlengthget%f\n",mLength->getValue());

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
