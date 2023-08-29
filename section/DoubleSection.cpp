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
    case SET_RBLUE_MARKER:
        set(Rcourse);
        NO = RBLUE_MARKER;
        break;
    case RBLUE_MARKER:
        rbluemarker();
        break; 
    case SET_RNEXT_POINT:
        set(Rnextpoint);
        NO = RNEXT_POINT;
        break;
    case RNEXT_POINT:
        rnextpoint();
        break;
    case SET_RFINISHE1:
        set(Rbluemarker1);
        NO = RFINISHE1;
        break;
    case RFINISHE1:
        rfinishe1();
        break;
    case SET_RFINISHE2:
        set(Rbluemarker2);
        NO = RFINISHE2;
        break;
    case RFINISHE2:
        rfinishe2();
        break;
    case SET_RFINISHE3:
        set(Rbluemarker3);
        NO = RFINISHE3;
        break;
    case RFINISHE3:
        rfinishe3();
        break;
    case SET_RFINISHE4:
        set(Rbluemarker4);
        NO = RFINISHE4;
        break;
    case RFINISHE4:
        rfinishe4();
        break;    
    case END:
        printf("END\n");
        return true;
    }
    return false;
}

/*bool DoubleSection::init()
{
   if(SectionManager::run())
}*/

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

void DoubleSection::rbluemarker()
{
    if(SectionManager::run())
    {
        NO = SET_RNEXT_POINT;
    }
}

void DoubleSection::rnextpoint()
{
    if(SectionManager::run())
    {
        NO = SET_RFINISHE1;
    }
}

void DoubleSection::rfinishe1()
{
    if(SectionManager::run())
    {
        NO = END;
    }
}
void DoubleSection::rfinishe2()
{
    if(SectionManager::run())
    {
        NO = END;
    }
}

void DoubleSection::rfinishe3()
{
    if(SectionManager::run())
    {
        NO = END;
    }
}

void DoubleSection::rfinishe4()
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