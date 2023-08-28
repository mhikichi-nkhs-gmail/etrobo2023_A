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
    case SET_LFINISHE2:
        set(Lbluemarker2);
        NO = LFINISHE2;
        break;
    case LFINISHE2:
        lfinishe2();
        break;
    case SET_LFINISHE3:
        set(Lbluemarker3);
        NO = LFINISHE3;
        break;
    case LFINISHE3:
        lfinishe3();
        break;
    case SET_LFINISHE4:
        set(Lbluemarker4);
        NO = LFINISHE4;
        break;
    case LFINISHE4:
        lfinishe4();
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
        NO = SET_LBLUE_MARKER;
    }
    else
    {
        NO = SET_LBLUE_MARKER;
    }
}


void DoubleSection::lbluemarker()
{
    if(SectionManager::run())
    {
        NO = SET_LNEXT_POINT;
    }
}

void DoubleSection::lnextpoint()
{
    if(SectionManager::run())
    {
        NO = SET_LFINISHE1;
    }
}

void DoubleSection::lfinishe1()
{
    if(SectionManager::run())
    {
        NO = END;
    }
}
void DoubleSection::lfinishe2()
{
    if(SectionManager::run())
    {
        NO = END;
    }
}

void DoubleSection::lfinishe3()
{
    if(SectionManager::run())
    {
        NO = END;
    }
}

void DoubleSection::lfinishe4()
{
    if(SectionManager::run())
    {
        NO = END;
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