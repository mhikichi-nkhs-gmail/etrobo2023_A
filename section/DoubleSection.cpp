#include "DoubleSection.h"
#include "Section.h"

DoubleSection::DoubleSection()
{
    mSectionIdx=0;
    mLastIdx=0;
}
/*
bool DoubleSection::run()
{
    switch(LNO)
    {
    case SET_LBLUE_MARKER:
        set(Lcourse);
        printf("YAHOO\n");
        return true;
        break; 
    default:
        break;
    }
    return false;
}
*/


void DoubleSection::course(int direct)
{
    printf("BBBBB\n");
    if(direct == 0)
    {
        printf("c\n");
        set(Lcourse);
        NO = SET_LBLUE_MARKER;
    }
    else
    {
        printf("d\n");
        LNO = SET_LBLUE_MARKER;
    
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