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
    case INIT_RED_MARKER_LEFTEDGE:
        set(Go_red_sircle_leftedge);
        COURSE = RED_MARKER_LEFTEDGE;
        break;
    case RED_MARKER_LEFTEDGE:
        change(num1);
        break;
    case INIT_RED_MARKER_RIGHTEDGE:
        set(Go_red_sircle_rightedge);
        COURSE = RED_MARKER_RIGHTEDGE;
        break;
    case RED_MARKER_RIGHTEDGE:
        change(num1);
        break;
    case INIT_BLUE_MARKER_LEFTEDGE:
        set(Go_blue_sircle_leftedge);
        COURSE = BLUE_MARKER_LEFTEDGE;
        break;
    case BLUE_MARKER_LEFTEDGE:
        change(num1);
        break;
    case INIT_BLUE_MARKER_RIGHTEDGE:
        set(Go_blue_sircle_rightedge);
        COURSE = BLUE_MARKER_RIGHTEDGE;
        break;
    case BLUE_MARKER_RIGHTEDGE:
        change(num1);
        break;
    case INIT_YELLOW_MARKER_LEFTEDGE:
        set(Go_yellow_sircle_leftedge);
        COURSE = YELLOW_MARKER_LEFTEDGE;
        break;
    case YELLOW_MARKER_LEFTEDGE:
        change(num1);
        break;
    case INIT_YELLOW_MARKER_RIGHTEDGE:
        set(Go_yellow_sircle_rightedge);
        COURSE = YELLOW_MARKER_RIGHTEDGE;
        break;
    case YELLOW_MARKER_RIGHTEDGE:
        change(num1);
        break;
    case INIT_GREEN_MARKER_LEFTEDGE:
        set(Go_green_sircle_leftedge);
        COURSE = GREEN_MARKER_LEFTEDGE;
        break;
    case GREEN_MARKER_LEFTEDGE:
        printf("LEFT\n");
        change(num1);
        break;
    case INIT_GREEN_MARKER_RIGHTEDGE:
        set(Go_green_sircle_rightedge);
        COURSE = GREEN_MARKER_RIGHTEDGE;
        break;
    case GREEN_MARKER_RIGHTEDGE:
        printf("RIGHT\n");
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
        printf("LAST\n");
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
        num1 = 1;
    }
}

void BlockSection::change(int num2)
{
    if(SectionManager::run())
    {
        switch(num2){
            case 0:
            COURSE = INIT_RED_MARKER_LEFTEDGE;
            break;
            case 1:
            COURSE = INIT_RED_MARKER_RIGHTEDGE;
            num1 = 9;
            break;
            case 2:
            COURSE = INIT_BLUE_MARKER_LEFTEDGE;
            break;
            case 3:
            COURSE = INIT_BLUE_MARKER_RIGHTEDGE;
            break;
            case 4:
            COURSE = INIT_YELLOW_MARKER_LEFTEDGE;
            break;
            case 5:
            COURSE = INIT_YELLOW_MARKER_RIGHTEDGE;
            break;
            case 6:
            COURSE = INIT_GREEN_MARKER_LEFTEDGE;
            num1 = 24;
            break;
            case 7:
            COURSE = INIT_GREEN_MARKER_RIGHTEDGE;
            num1 = 24;
            break;
            case 8:
            COURSE = INIT_LEFTTURN_LEFTEDGE_RED;
            //num1 = 14;
            break;
            case 9:
            COURSE = INIT_LEFTTURN_RIGHTEDGE_RED;
            num1 = 11;
            break;
            case 10:
            COURSE = INIT_LEFTTURN_LEFTEDGE_BLUE;
            num1 = 15;
            break;
            case 11:
            COURSE = INIT_LEFTTURN_RIGHTEDGE_BLUE;
            num1 = 22;
            break;
            case 12:
            COURSE = INIT_LEFTTURN_LEFTEDGE_YELLOW;
            break;
            case 13:
            COURSE = INIT_LEFTTURN_RIGHTEDGE_YELLOW;
            break;
            case 14:
            COURSE = INIT_LEFTTURN_LEFTEDGE_GREEN;
            num1 = 17;
            break;
            case 15:
            COURSE = INIT_LEFTTURN_RIGHTEDGE_GREEN;
            break;
            case 16:
            COURSE = INIT_RIGHTTURN_LEFTEDGE_RED;
            break;
            case 17:
            COURSE = INIT_RIGHTTURN_RIGHTEDGE_RED;
            printf("SSS\n");
            num1 = 24;
            break;
            case 18:
            COURSE = INIT_RIGHTTURN_LEFTEDGE_BLUE;
            break;
            case 19:
            COURSE = INIT_RIGHTTURN_RIGHTEDGE_BLUE;
            break;
            case 20:
            COURSE = INIT_RIGHTTURN_LEFTEDGE_YELLOW;
            break;
            case 21:
            COURSE = INIT_RIGHTTURN_RIGHTEDGE_YELLOW;
            break;
            case 22:
            COURSE = INIT_RIGHTTURN_LEFTEDGE_GREEN;
            num1 = 7;
            break;
            case 23:
            COURSE = INIT_RIGHTTURN_RIGHTEDGE_GREEN;
            break;
            case 24:
            COURSE = INIT_LAST;
            num1 = 25;
            break;
            case 25:
            COURSE = END;
            break;
            
        }
    }
}

    