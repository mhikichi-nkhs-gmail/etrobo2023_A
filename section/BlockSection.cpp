#include "BlockSection.h"
#include "Section.h"
BlockSection::BlockSection()
{
    mSectionIdx=0;
    mLastIdx=0;
}

bool BlockSection::run()
{
    switch(COURSE)
    {
    case INIT_FIRST_LCOURSE:
        set(Lfirst);
        COURSE = FIRST_LCOURSE;
        break;
    case FIRST_LCOURSE:
        change(num1);
        break; 
    case INIT_FIRST_RCOURSE:
        set(Rfirst);
        COURSE = FIRST_RCOURSE;
        break;
    case FIRST_RCOURSE:
        change(num1);
        break;
    case INIT_BLUE_MARKER:
        set(Go_blue_sircle);
        break;
    case BLUE_MARKER:
        change(1);
        break;
    case END:
        printf("END\n");
        return true;
    }
    return false;
}

void BlockSection::course(int direct)
{
    if(direct == 0)
    {
        COURSE = INIT_FIRST_LCOURSE;
        num1 = 0;
    }
    else
    {
        COURSE = INIT_FIRST_RCOURSE;
        num1 = 0;
    }
}

void BlockSection::change(int num2)
{
    if(SectionManager::run())
    {
        switch(num2){
            case 0:
            COURSE = INIT_BLUE_MARKER;
            break;
            case 1:
            COURSE = END;
            break;
        }
    }
}

    