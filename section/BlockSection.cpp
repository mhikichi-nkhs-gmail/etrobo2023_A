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
        printf("INIT_FIRST\n");
        set(Rfirst);
        COURSE = FIRST_RCOURSE;
        break;
    case FIRST_RCOURSE:
        printf("FIRST\n");
        change(0);
        break;
    case INIT_BLUE_MARKER:
        printf("INIT_BLUE\n");
        set(Go_blue_sircle);
        COURSE = BLUE_MARKER;
        break;
    case BLUE_MARKER:
        printf("BLUE\n");
        change(1);
        break;
    case INIT_RED_MARKER:
        printf("INIT_RED\n");
        set(Go_red_sircle);
        COURSE = RED_MARKER;
        break;
    case RED_MARKER:
        printf("RED\n");
        change(2);
        break;
    case INIT_YELLOW_MARKER:
        printf("INIT_YELLOW\n");
        set(Go_yellow_sircle);
        COURSE = YELLOW_MARKER;
        break;
    case YELLOW_MARKER:
        printf("YELLOW\n");
        change(3);
        break;
    case INIT_RIGHT_LEFT:
        printf("INIT_RIGHT_LEFT\n");
        set(leftturn_from_rightedge_for_red);
        COURSE = RIGHT_LEFT;
        break;
    case RIGHT_LEFT:
        printf("RIGHT_LEFT\n");
        change(1);
        break;
    case INIT_LAST:
        printf("INIT_LAST\n");
        set(Last);
        COURSE = LAST;
        break;
    case LAST:
        printf("LAST\n");
        change(4);
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
            COURSE = INIT_RED_MARKER;
            break;
            case 1:
            COURSE = INIT_YELLOW_MARKER;
            break;
            case 2:
            COURSE = INIT_RIGHT_LEFT;
            break;
            case 3:
            COURSE = INIT_LAST;
            break;
            case 4:
            COURSE = END;
            break;
        }
    }
}

    