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
    switch(NO)
    {
    case SET_LBLUE_MARKER:
        set(Lcourse);
        NO = END;
        printf("YAHOO\n");
        break; 
    case END:
        printf("YAHOO2\n");
        return true;
    }
    return false;
}
*/

void DoubleSection::course(int direct)
{
    if(direct == 0)
    {
        printf("BBBBBX\n");
        printf("c\n");
        set(Lcourse);
        set(Lnextpoint);
        //NO = SET_LBLUE_MARKER;
    }
    else
    {
        printf("d\n");
        //NO = SET_LBLUE_MARKER;
    
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