#include "BlockSection.h"
#include "Section.h"
BlockSection::BlockSection()
{
    mSectionIdx=0;
    mLastIdx=0;
}

bool BlockSection::run()
{
    return true;
}

void BlockSection::course(int direct)
{
    if(direct == 0)
    {
        set(Lfirst);
    }
    else
    {
        set(Rfirst);
    }
}

    