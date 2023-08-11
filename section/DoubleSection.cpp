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
        printf("a");
        printf("mscetion%d\n", mSectionIdx);
        printf("mlast%d\n", mLastIdx);
        if(mSectionIdx == mLastIdx)
        {
            return true;
        }
        else
        {
            mSectionIdx++;
        }
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