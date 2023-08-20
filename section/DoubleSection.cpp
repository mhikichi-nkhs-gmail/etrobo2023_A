#include "DoubleSection.h"
#include "Section.h"

DoubleSection::DoubleSection()
{
    mSectionIdx=0;
    mLastIdx=0;
}

bool DoubleSection::run()
{
    if(mSection[mSectionIdx]->run())
    {
        printf("a\n");
        mSectionIdx++;
        if(mSectionIdx == mLastIdx)
        {
            return true;
        }
        /*else
        {
            mSectionIdx++;
        }*/
        printf("mScetion%d\n", mSectionIdx);
        printf("mLast%d\n", mLastIdx);
    }
    return false;
}

void DoubleSection::course(int direct)
{
    printf("BBBBB\n");
    if(direct == 0)
    {
        printf("c\n");
        set(Lcourse);
    }
    else
    {
        printf("d\n");
        set(Rcourse);
    }
}

void DoubleSection::scircle(int direct)
{
    if(direct == 0)
    {
        printf("left\n");
        set(SLcourse);
    }
    else
    {
        printf("right");
        set(SRcourse);
    }
}