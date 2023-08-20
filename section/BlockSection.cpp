#include "BlockSection.h"
#include "Section.h"

BlockSection::BlockSection()
{
    mSectionIdx=0;
    mLastIdx=0;
}

bool BlockSection::run()
{
    if(mSection[mSectionIdx]->run())
    {
        mSectionIdx++;
        if(mSectionIdx == mLastIdx)
        {
            return true;
        }
        printf("mSection%d\n",mSectionIdx);
        printf("mLast%d\n",mLastIdx);
    }
    return false;
}

void BlockSection::course(int direct)
{
    if(direct == 0)
    {
        printf("blockleft\n");
        set(Lcourse);
    }
    else
    {
        printf("blockright");
        set(Rcourse);
    }
}