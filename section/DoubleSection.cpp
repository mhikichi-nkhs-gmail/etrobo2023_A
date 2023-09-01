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
        printf("mscetion%d\n", mSectionIdx);
        printf("mlast%d\n", mLastIdx);
    }
    return false;
}

void DoubleSection::course(int direct)
{
    printf("BBBBB\n");
    if(direct == 0)
    {
        printf("c\n");
        set(Lpoint);
        set(Lnext);
        set(Lnext);
        set(Lnext);
        set(Lnext);
        set(LLast);
        set(LGoal);

    }
    else
    {
        printf("d\n");
        set(Rpoint);
    }
}

