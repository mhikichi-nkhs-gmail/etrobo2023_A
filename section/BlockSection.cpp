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
        //printf("INIT_FIRST\n");
        set(Rfirst);
        COURSE = FIRST_RCOURSE;
        break;
    case FIRST_RCOURSE:
        //printf("FIRST\n");
        change(num1);
        break;
    case INIT_RED_MARKER:
        //printf("INIT_BLUE\n");
        set(Go_red_sircle);
        COURSE = RED_MARKER;
        break;
    case RED_MARKER:
        printf("BLUE\n");
        change(num1);
        break;
    case INIT_BLUE_MARKER:
        //printf("INIT_RED\n");
        set(Go_blue_sircle);
        COURSE = BLUE_MARKER;
        break;
    case BLUE_MARKER:
        //printf("RED\n");
        change(num1);
        break;
    case INIT_YELLOW_MARKER:
        //printf("INIT_YELLOW\n");
        set(Go_yellow_sircle);
        COURSE = YELLOW_MARKER;
        break;
    case YELLOW_MARKER:
        //printf("YELLOW\n");
        change(num1);
        break;
    case INIT_LEFTTURN_LEFTEDGE_RED:
        set(leftturn_from_leftedge_for_red);
        COURSE = LEFTTURN_LEFTEDGE_RED;
        break;
    case LEFTTURN_LEFTEDGE_RED:
        change(num1);
        break;
    case INIT_LEFTTURN_RIGHTEDGE_RED:
        //printf("INIT_RIGHT_LEFT\n");
        set(leftturn_from_rightedge_for_red);
        COURSE = LEFTTURN_RIGHTEDGE_RED;
        break;
    case LEFTTURN_RIGHTEDGE_RED:
        //printf("RIGHT_LEFT\n");
        change(num1);
        break;
    case INIT_LEFTTURN_LEFTEDGE_BLUE:
        set(leftturn_from_leftedge_for_blue);
        COURSE = LEFTTURN_LEFTEDGE_BLUE;
        break;
    case LEFTTURN_LEFTEDGE_BLUE:
        change(num1);
        break;
    case INIT_LEFTTURN_RIGHTEDGE_BLUE:
        //printf("INIT_RIGHT_LEFT\n");
        set(leftturn_from_rightedge_for_blue);
        COURSE = LEFTTURN_RIGHTEDGE_BLUE;
        break;
    case LEFTTURN_RIGHTEDGE_BLUE:
        //printf("RIGHT_LEFT\n");
        change(num1);
        break;
    case INIT_LEFTTURN_LEFTEDGE_YELLOW:
        set(leftturn_from_leftedge_for_yellow);
        COURSE = LEFTTURN_LEFTEDGE_YELLOW;
        break;
    case LEFTTURN_LEFTEDGE_YELLOW:
        change(num1);
        break;
    case INIT_LEFTTURN_RIGHTEDGE_YELLOW:
        //printf("INIT_RIGHT_LEFT\n");
        set(leftturn_from_rightedge_for_yellow);
        COURSE = LEFTTURN_RIGHTEDGE_YELLOW;
        break;
    case LEFTTURN_RIGHTEDGE_YELLOW:
        //printf("RIGHT_LEFT\n");
        change(num1);
        break;
    case INIT_LEFTTURN_LEFTEDGE_GREEN:
        set(leftturn_from_leftedge_for_green);
        COURSE = LEFTTURN_LEFTEDGE_GREEN;
        break;
    case LEFTTURN_LEFTEDGE_GREEN:
        change(num1);
        break;
    case INIT_LEFTTURN_RIGHTEDGE_GREEN:
        //printf("INIT_RIGHT_LEFT\n");
        set(leftturn_from_rightedge_for_green);
        COURSE = LEFTTURN_RIGHTEDGE_GREEN;
        break;
    case LEFTTURN_RIGHTEDGE_GREEN:
        //printf("RIGHT_LEFT\n");
        change(num1);
        break;
    case INIT_RIGHTTURN_LEFTEDGE_RED:
        set(rightturn_from_leftedge_for_red);
        COURSE = RIGHTTURN_LEFTEDGE_RED;
        break;
    case RIGHTTURN_LEFTEDGE_RED:
        change(num1);
        break;
    case INIT_RIGHTTURN_RIGHTEDGE_RED:
        //printf("INIT_RIGHT_LEFT\n");
        set(rightturn_from_rightedge_for_red);
        COURSE = RIGHTTURN_RIGHTEDGE_RED;
        break;
    case RIGHTTURN_RIGHTEDGE_RED:
        //printf("RIGHT_LEFT\n");
        change(num1);
        break;
    case INIT_RIGHTTURN_LEFTEDGE_BLUE:
        set(rightturn_from_leftedge_for_blue);
        COURSE = RIGHTTURN_LEFTEDGE_BLUE;
        break;
    case RIGHTTURN_LEFTEDGE_BLUE:
        change(num1);
        break;
    case INIT_RIGHTTURN_RIGHTEDGE_BLUE:
        set(rightturn_from_rightedge_for_blue);
        COURSE = RIGHTTURN_RIGHTEDGE_BLUE;
        break;
    case RIGHTTURN_RIGHTEDGE_BLUE:
        change(num1);
        break;
    case INIT_RIGHTTURN_LEFTEDGE_YELLOW:
        set(rightturn_from_leftedge_for_yellow);
        COURSE = RIGHTTURN_LEFTEDGE_YELLOW;
        break;
    case RIGHTTURN_LEFTEDGE_YELLOW:
        change(num1);
        break;
    case INIT_RIGHTTURN_RIGHTEDGE_YELLOW:
        set(rightturn_from_rightedge_for_yellow);
        COURSE = RIGHTTURN_RIGHTEDGE_YELLOW;
        break;
    case RIGHTTURN_RIGHTEDGE_YELLOW:
        change(num1);
        break;
    case INIT_RIGHTTURN_LEFTEDGE_GREEN:
        set(rightturn_from_leftedge_for_green);
        COURSE = RIGHTTURN_LEFTEDGE_GREEN;
        break;
    case RIGHTTURN_LEFTEDGE_GREEN:
        change(num1);
        break;
    case INIT_RIGHTTURN_RIGHTEDGE_GREEN:
        set(rightturn_from_rightedge_for_green);
        COURSE = RIGHTTURN_RIGHTEDGE_GREEN;
        break;
    case RIGHTTURN_RIGHTEDGE_GREEN:
        change(num1);
        break;
    case INIT_LAST:
        set(Last);
        COURSE = LAST;
        break;
    case LAST:
        //printf("LAST\n");
        change(num1);
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
            COURSE = INIT_BLUE_MARKER;
            break;
            case 2:
            COURSE = INIT_YELLOW_MARKER;
            break;
            case 3:
            COURSE = INIT_GRREN_MARKER;
            break;
            case 4:
            COURSE = INIT_LEFTTURN_LEFTEDGE_RED;
            break;
            case 5:
            COURSE = INIT_LEFTTURN_RIGHTEDGE_RED;
            break;
            case 6:
            COURSE = INIT_LEFTTURN_LEFTEDGE_BLUE;
            break;
            case 7:
            COURSE = INIT_LEFTTURN_RIGHTEDGE_BLUE;
            break;
            case 8:
            COURSE = INIT_LEFTTURN_LEFTEDGE_YELLOW;
            break;
            case 9:
            COURSE = INIT_LEFTTURN_RIGHTEDGE_YELLOW;
            break;
            case 10:
            COURSE = INIT_LEFTTURN_LEFTEDGE_GREEN;
            break;
            case 11:
            COURSE = INIT_LEFTTURN_RIGHTEDGE_GREEN;
            break;
        }
    }
}

    