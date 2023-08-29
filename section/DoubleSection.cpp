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
        NO = SET_LNEXT_POINT;
        bluemarker();
        break; 
    case SET_LNEXT_POINT:
        set(Lnextpoint);
        NO = LNEXT_POINT;
        break;
    case LNEXT_POINT:
        NO = SET_LFINISHE1
        bluemarker();
        break;
    case SET_LFINISHE1:
        set(Lbluemarker1);
        NO = LFINISHE1;
        break;
    case LFINISHE1:
        NO = SET_LFINISHE2;
        bluemarker();
        break;
    case SET_LFINISHE2:
        set(Lbluemarker2);
        NO = LFINISHE2;
        break;
    case LFINISHE2:
        NO = SET_LFINISHE3;
        bluemarker();
        break;
    case SET_LFINISHE3:
        set(Lbluemarker3);
        NO = LFINISHE3;
        break;
    case LFINISHE3:
        NO = SET_LFINISHE4;
        bluemarker();
        break;
    case SET_LFINISHE4:
        set(Lbluemarker4);
        NO = LFINISHE4;
        break;
    case LFINISHE4:
        NO = END;
        bluemarker();
        break;    
    case SET_RBLUE_MARKER:
        set(Rcourse);
        NO = RBLUE_MARKER;
        break;
    case RBLUE_MARKER:
        NO = SET_RNEXT_POINT;
        bluemarker();
        break; 
    case SET_RNEXT_POINT:
        set(Rnextpoint);
        NO = RNEXT_POINT;
        break;
    case RNEXT_POINT:
        NO = SET_RFINISHE1;
        bluemarker();
        break;
    case SET_RFINISHE1:
        set(Rbluemarker1);
        NO = RFINISHE1;
        break;
    case RFINISHE1:
        NO = SET_RFINISHE2;
        bluemarker();
        break;
    case SET_RFINISHE2:
        set(Rbluemarker2);
        NO = RFINISHE2;
        break;
    case RFINISHE2:
    NO = SET_RFINISHE2;
        bluemarker();
        break;
    case SET_RFINISHE3:
        set(Rbluemarker3);
        NO = RFINISHE3;
        break;
    case RFINISHE3:
        bluemarker();
        break;
    case SET_RFINISHE4:
        set(Rbluemarker4);
        NO = RFINISHE4;
        break;
    case RFINISHE4:
        bluemarker();
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
        NO = SET_RBLUE_MARKER;
    }
}

void DoubleSection::bluemarker(/*char pass*/)
{
    if(SectionManager::run())
    {
        if(pass == '1')
        {
            NO = END;
        }
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