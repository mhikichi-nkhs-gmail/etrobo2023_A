#include "BlockSection.h"

BlockSection::BlockSection()
{
    //set();
}

bool BlockSection::run()
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