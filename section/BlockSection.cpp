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
    case INIT_FIRST_LCOURSE1:
        set(Lfirst_left);
        COURSE = FIRST_LCOURSE1;
        break;
    case FIRST_LCOURSE1:
        change(num1);
        break; 
    case INIT_FIRST_LCOURSE2:
        set(Lfirst_right);
        COURSE = FIRST_LCOURSE2;
        break;
    case FIRST_LCOURSE2:
        change(num1);
        break;
    case INIT_FIRST_RCOURSE1:
        set(Rfirst_left);
        COURSE = FIRST_RCOURSE1;
        break;
    case FIRST_RCOURSE1:
        change(num1);
        break;
    case INIT_FIRST_RCOURSE2:
        set(Rfirst_right);
        COURSE = FIRST_RCOURSE2;
        break;
    case FIRST_RCOURSE2:
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
    case INIT_LLAST1:
        set(LLast1);
        COURSE = LLAST1;
        break;
    case LLAST1:
        printf("LAST\n");
        change(num1);
        break;
    case INIT_LLAST2:
        set(LLast2);
        COURSE = LLAST1;
        break;
    case LLAST2:
        printf("LAST\n");
        change(num1);
        break;
    case INIT_LLAST3:
        set(LLast3);
        COURSE = LLAST3;
        break;
    case LLAST3:
        printf("LAST\n");
        change(num1);
        break;
    case INIT_LLAST4:
        set(LLast4);
        COURSE = LLAST4;
        break;
    case LLAST4:
        printf("LAST\n");
        change(num1);
        break;
    case INIT_RLAST1:
        set(RLast1);
        COURSE = RLAST1;
        break;
    case RLAST1:
        printf("LAST\n");
        change(num1);
        break;
    case INIT_RLAST2:
        set(RLast2);
        COURSE = RLAST2;
        break;
    case RLAST2:
        change(num1);
        break;
    case INIT_RLAST3:
        set(RLast3);
        COURSE = RLAST3;
        break;
    case RLAST3:
        change(num1);
        break;
    case INIT_RLAST4:
        set(RLast4);
        COURSE = RLAST4;
        break;
    case RLAST4:
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
        //COURSE = INIT_FIRST_LCOURSE;
        num1 = 0;
    }
    else
    {
        //COURSE = INIT_FIRST_RCOURSE;
        num1 = 1;
        master = 5;
    }
}

void BlockSection::change(int num2)
{
    if(SectionManager::run())
    {
        if(master == 0)
        {
            switch (root)
            {
            case 0:
                COURSE = INIT_FIRST_LCOURSE1;
                break;
            case 1:
                COURSE = INIT_LEFTTURN_RIGHTEDGE_BLUE;
                break;
            case 2:
                COURSE = INIT_GREEN_MARKER_LEFTEDGE;
                break;
            case 3:
                COURSE = INIT_GREEN_MARKER_LEFTEDGE;
                break;
            case 4:
                COURSE = INIT_LEFTTURN_LEFTEDGE_GREEN;
                break;
            case 5:
                COURSE = INIT_YELLOW_MARKER_RIGHTEDGE;
                break;
            case 6:
                COURSE = INIT_YELLOW_MARKER_RIGHTEDGE;
                break;
            case 7:
                COURSE = INIT_LEFTTURN_RIGHTEDGE_YELLOW;
                break;
            case 8:
                COURSE = INIT_RED_MARKER_LEFTEDGE;
                break;
            case 9:
                COURSE = INIT_RED_MARKER_LEFTEDGE;
                break;
            case 10:
                COURSE = INIT_LEFTTURN_LEFTEDGE_RED;
                break;
            case 11:
                COURSE = INIT_BLUE_MARKER_RIGHTEDGE;
                break;
            case 12:
                COURSE = INIT_LEFTTURN_RIGHTEDGE_BLUE;
                break;
            case 13:
                COURSE = INIT_GREEN_MARKER_LEFTEDGE;
                break;
            case 14:
                COURSE = INIT_LEFTTURN_RIGHTEDGE_YELLOW;
                break;
            case 15:
                COURSE = INIT_LEFTTURN_LEFTEDGE_RED;
                break;
            case 16:
                COURSE = INIT_LLAST1;
                break;
            case 17:
                COURSE = END;
                break;
            }
        }
        else if (master == 1)
        {
            switch(root)
            {
            case 0:
                COURSE = INIT_FIRST_LCOURSE2;
                break;
            case 1:
                COURSE = INIT_RED_MARKER_LEFTEDGE;
                break;
            case 2:
                COURSE = INIT_RED_MARKER_LEFTEDGE;
                break;
            case 3:
                COURSE = INIT_RIGHTTURN_LEFTEDGE_RED;
                break;
            case 4:
                COURSE = INIT_YELLOW_MARKER_RIGHTEDGE;
                break;
            case 5:
                COURSE = INIT_YELLOW_MARKER_RIGHTEDGE;
                break;
            case 6:
                COURSE = INIT_RIGHTTURN_RIGHTEDGE_YELLOW;
                break;
            case 7:
                COURSE = INIT_GREEN_MARKER_LEFTEDGE;
                break;
            case 8:
                COURSE = INIT_GREEN_MARKER_LEFTEDGE;
                break;
            case 9:
                COURSE = INIT_RIGHTTURN_LEFTEDGE_GREEN;
                break;
            case 10:
                COURSE = INIT_BLUE_MARKER_RIGHTEDGE;
                break;
            case 11:
                COURSE = INIT_RIGHTTURN_RIGHTEDGE_BLUE;
                break;
            case 12:
                COURSE = INIT_RED_MARKER_LEFTEDGE;
                break;
            case 13:
                COURSE = INIT_RIGHTTURN_LEFTEDGE_YELLOW;
                break;
            case 14:
                COURSE = INIT_RIGHTTURN_RIGHTEDGE_GREEN;
                break;
            case 15:
                COURSE = INIT_LLAST2;
                break;
            case 16:
                COURSE = END;
                break;
            }
        }
        else if(master == 2)
        {
            switch (root)
            {
            case 0:
                COURSE = INIT_FIRST_LCOURSE1;
                break;
            case 1:
                COURSE = INIT_LEFTTURN_RIGHTEDGE_BLUE;
                break;
            case 2:
                COURSE = INIT_GREEN_MARKER_LEFTEDGE;
                break;
            case 3:
                COURSE = INIT_GREEN_MARKER_LEFTEDGE;
                break;
            case 4:
                COURSE = INIT_LEFTTURN_LEFTEDGE_GREEN;
                break;
            case 5:
                COURSE = INIT_LEFTTURN_RIGHTEDGE_GREEN;
                break;
            case 6:
                COURSE = INIT_BLUE_MARKER_LEFTEDGE;
                break;
            case 7:
                COURSE = INIT_BLUE_MARKER_LEFTEDGE;
                break;
            case 8:
                COURSE = INIT_RIGHTTURN_LEFTEDGE_RED;
                break;
            case 9:
                COURSE = INIT_RIGHTTURN_RIGHTEDGE_RED;
                break;
            case 10:
                COURSE = INIT_YELLOW_MARKER_LEFTEDGE;
                break;
            case 11:
                COURSE = INIT_YELLOW_MARKER_LEFTEDGE;
                break;
            case 12:
                COURSE = INIT_LEFTTURN_LEFTEDGE_YELLOW;
                break;
            case 13:
                COURSE = INIT_LEFTTURN_LEFTEDGE_YELLOW;
                break;
            case 14:
                COURSE = INIT_RED_MARKER_LEFTEDGE;
                break;
            case 15:
                COURSE = INIT_RED_MARKER_LEFTEDGE;
                break;
            case 16:
                COURSE = INIT_LLAST3;
                break;
            case 17:
                COURSE = END;
                break;
            }
        }
        else if (master == 3)
        {
            switch(root)
            {
            case 0:
                COURSE = INIT_FIRST_LCOURSE2;
                break;
            case 1:
                COURSE = INIT_RED_MARKER_LEFTEDGE;
                break;
            case 2:
                COURSE = INIT_RED_MARKER_LEFTEDGE;
                break;
            case 3:
                COURSE = INIT_RIGHTTURN_LEFTEDGE_RED;
                break;
            case 4:
                COURSE = INIT_RIGHTTURN_RIGHTEDGE_RED;
                break;
            case 5:
                COURSE = INIT_BLUE_MARKER_LEFTEDGE;
                break;
            case 6:
                COURSE = INIT_BLUE_MARKER_LEFTEDGE;
                break;
            case 7:
                COURSE = INIT_LEFTTURN_LEFTEDGE_GREEN;
                break;
            case 8:
                COURSE = INIT_LEFTTURN_RIGHTEDGE_GREEN;
                break;
            case 9:
                COURSE = INIT_YELLOW_MARKER_LEFTEDGE;
                break;
            case 10:
                COURSE = INIT_YELLOW_MARKER_LEFTEDGE;
                break;
            case 11:
                COURSE = INIT_RIGHTTURN_LEFTEDGE_YELLOW;
                break;
            case 12:
                COURSE = INIT_RIGHTTURN_RIGHTEDGE_YELLOW;
                break;
            case 13:
                COURSE = INIT_GREEN_MARKER_LEFTEDGE;
                break;
            case 14:
                COURSE = INIT_GREEN_MARKER_LEFTEDGE;
                break;
            case 15:
                COURSE = INIT_LLAST4;
                break;
            case 16:
                COURSE = END;
                break;
            }
        }
        else if(master == 4)
        {
            switch (root)
            {
            case 0:
                COURSE = INIT_FIRST_RCOURSE1;
                break;
            case 1:
                COURSE = INIT_RIGHTTURN_LEFTEDGE_BLUE;
                break;
            case 2:
                COURSE = INIT_GREEN_MARKER_RIGHTEDGE;
                break;
            case 3:
                COURSE = INIT_GREEN_MARKER_RIGHTEDGE;
                break;
            case 4:
                COURSE = INIT_RIGHTTURN_RIGHTEDGE_GREEN;
                break;
            case 5:
                COURSE = INIT_YELLOW_MARKER_LEFTEDGE;
                break;
            case 6:
                COURSE = INIT_YELLOW_MARKER_LEFTEDGE;
                break;
            case 7:
                COURSE = INIT_RIGHTTURN_LEFTEDGE_YELLOW;
                break;
            case 8:
                COURSE = INIT_RED_MARKER_RIGHTEDGE;
                break;
            case 9:
                COURSE = INIT_RED_MARKER_RIGHTEDGE;
                break;
            case 10:
                COURSE = INIT_RIGHTTURN_RIGHTEDGE_RED;
                break;
            case 11:
                COURSE = INIT_BLUE_MARKER_LEFTEDGE;
                break;
            case 12:
                COURSE = INIT_RIGHTTURN_LEFTEDGE_BLUE;
                break;
            case 13:
                COURSE = INIT_GREEN_MARKER_RIGHTEDGE;
                break;
            case 14:
                COURSE = INIT_RIGHTTURN_RIGHTEDGE_YELLOW;
                break;
            case 15:
                COURSE = INIT_RIGHTTURN_LEFTEDGE_RED;
                break;
            case 16:
                COURSE = INIT_RLAST1;
                break;
            case 17:
                COURSE = END;
                break;
            }
        }
        else if (master == 5)
        {
            switch(root)
            {
            case 0:
                COURSE = INIT_FIRST_RCOURSE2;
                break;
            case 1:
                COURSE = INIT_RED_MARKER_RIGHTEDGE;
                break;
            case 2:
                COURSE = INIT_RED_MARKER_RIGHTEDGE;
                break;
            case 3:
                COURSE = INIT_LEFTTURN_RIGHTEDGE_RED;
                break;
            case 4:
                COURSE = INIT_YELLOW_MARKER_LEFTEDGE;
                break;
            case 5:
                COURSE = INIT_YELLOW_MARKER_LEFTEDGE;
                break;
            case 6:
                COURSE = INIT_LEFTTURN_LEFTEDGE_YELLOW;
                break;
            case 7:
                COURSE = INIT_GREEN_MARKER_RIGHTEDGE;
                break;
            case 8:
                COURSE = INIT_GREEN_MARKER_RIGHTEDGE;
                break;
            case 9:
                COURSE = INIT_LEFTTURN_RIGHTEDGE_GREEN;
                break;
            case 10:
                COURSE = INIT_BLUE_MARKER_LEFTEDGE;
                break;
            case 11:
                COURSE = INIT_LEFTTURN_LEFTEDGE_BLUE;
                break;
            case 12:
                COURSE = INIT_RED_MARKER_RIGHTEDGE;
                break;
            case 13:
                COURSE = INIT_LEFTTURN_RIGHTEDGE_YELLOW;
                break;
            case 14:
                COURSE = INIT_LEFTTURN_LEFTEDGE_GREEN;
                break;
            case 15:
                COURSE = INIT_RLAST2;
                break;
            case 16:
                COURSE = END;
                break;
            }
        }
        else if(master == 6)
        {
            switch (root)
            {
            case 0:
                COURSE = INIT_FIRST_RCOURSE1;
                break;
            case 1:
                COURSE = INIT_RIGHTTURN_LEFTEDGE_BLUE;
                break;
            case 2:
                COURSE = INIT_GREEN_MARKER_RIGHTEDGE;
                break;
            case 3:
                COURSE = INIT_GREEN_MARKER_RIGHTEDGE;
                break;
            case 4:
                COURSE = INIT_RIGHTTURN_RIGHTEDGE_GREEN;
                break;
            case 5:
                COURSE = INIT_RIGHTTURN_LEFTEDGE_GREEN;
                break;
            case 6:
                COURSE = INIT_BLUE_MARKER_RIGHTEDGE;
                break;
            case 7:
                COURSE = INIT_BLUE_MARKER_RIGHTEDGE;
                break;
            case 8:
                COURSE = INIT_LEFTTURN_RIGHTEDGE_RED;
                break;
            case 9:
                COURSE = INIT_LEFTTURN_LEFTEDGE_RED;
                break;
            case 10:
                COURSE = INIT_YELLOW_MARKER_RIGHTEDGE;
                break;
            case 11:
                COURSE = INIT_YELLOW_MARKER_RIGHTEDGE;
                break;
            case 12:
                COURSE = INIT_RIGHTTURN_RIGHTEDGE_YELLOW;
                break;
            case 13:
                COURSE = INIT_RIGHTTURN_RIGHTEDGE_YELLOW;
                break;
            case 14:
                COURSE = INIT_RED_MARKER_RIGHTEDGE;
                break;
            case 15:
                COURSE = INIT_RED_MARKER_RIGHTEDGE;
                break;
            case 16:
                COURSE = INIT_RLAST3;
                break;
            case 17:
                COURSE = END;
                break;
            }
        }
        else if (master == 7)
        {
            switch(root)
            {
            case 0:
                COURSE = INIT_FIRST_RCOURSE2;
                break;
            case 1:
                COURSE = INIT_RED_MARKER_RIGHTEDGE;
                break;
            case 2:
                COURSE = INIT_RED_MARKER_RIGHTEDGE;
                break;
            case 3:
                COURSE = INIT_LEFTTURN_RIGHTEDGE_RED;
                break;
            case 4:
                COURSE = INIT_LEFTTURN_LEFTEDGE_RED;
                break;
            case 5:
                COURSE = INIT_BLUE_MARKER_RIGHTEDGE;
                break;
            case 6:
                COURSE = INIT_BLUE_MARKER_RIGHTEDGE;
                break;
            case 7:
                COURSE = INIT_RIGHTTURN_RIGHTEDGE_GREEN;
                break;
            case 8:
                COURSE = INIT_RIGHTTURN_LEFTEDGE_GREEN;
                break;
            case 9:
                COURSE = INIT_YELLOW_MARKER_RIGHTEDGE;
                break;
            case 10:
                COURSE = INIT_YELLOW_MARKER_RIGHTEDGE;
                break;
            case 11:
                COURSE = INIT_LEFTTURN_RIGHTEDGE_YELLOW;
                break;
            case 12:
                COURSE = INIT_LEFTTURN_LEFTEDGE_YELLOW;
                break;
            case 13:
                COURSE = INIT_GREEN_MARKER_RIGHTEDGE;
                break;
            case 14:
                COURSE = INIT_GREEN_MARKER_RIGHTEDGE;
                break;
            case 15:
                COURSE = INIT_RLAST4;
                break;
            case 16:
                COURSE = END;
                break;
            }
        }
        
        

        
    }      
    root++;


        
}

    