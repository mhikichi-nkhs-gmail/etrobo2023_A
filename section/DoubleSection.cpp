#include "DoubleSection.h"

DoubleSection::DoubleSection()
{
    //set();
}

bool DoubleSection::run()
{
    if(mSection[mSectionIdx]->run())
    {
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