#include "DoubleSection.h"
#include "Section.h"

DoubleSection::DoubleSection()
{
    mSectionIdx=0;
    mLastIdx=0;
}

bool DoubleSection::run()
{   
    switch(NO)
    {
    case SET_LBLUE_MARKER:
        set(Lcourse);
        NO = LBLUE_MARKER;
        break;
    case LBLUE_MARKER:
        lbluemarker();
        break; 
    case SET_LNEXT_POINT:
        set(Lnextpoint);
        NO = LNEXT_POINT;
        break;
    case LNEXT_POINT:
        lnextpoint();
        break;
    case SET_LFINISHE1:
        set(Lbluemarker1);
        NO = LFINISHE1;
        break;
    case LFINISHE1:
        lfinishe1();
        break;
    case END:
        printf("END\n");
        return true;
    }
    return false;
}


void DoubleSection::course(int direct)
{
    if(direct == 0)
    {
        printf("DoubleCourse\n");
        //printf("c\n");
        //set(Lcourse);
        //set(Lnextpoint);
        NO = SET_LBLUE_MARKER;
    }
    else
    {
        //printf("d\n");
        NO = SET_LBLUE_MARKER;
    
    }
}

void DoubleSection::lbluemarker()
{
    if(SectionManager::run())
    {
        NO = SET_LNEXT_POINT;
        printf("lbluemarker\n");
    }
}

void DoubleSection::lnextpoint()
{
    if(SectionManager::run())
    {
        NO = SET_LFINISHE1;
        printf("lbluemarker\n");
    }
}

void DoubleSection::lfinishe1()
{
    if(SectionManager::run())
    {
        NO = END;
        printf("lbluemarker\n");
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