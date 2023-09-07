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
    case INIT_LEFTTURN_LEFTEDGE:
        set(leftturn_from_leftedge);
        COURSE = LEFTTURN_LEFTEDGE;
        break;
    case LEFTTURN_LEFTEDGE:
        change(num1);
        break;
    case INIT_LEFTTURN_RIGHTEDGE:
        //printf("INIT_RIGHT_LEFT\n");
        set(leftturn_from_rightedge);
        COURSE = LEFTTURN_RIGHTEDGE;
        break;
    case LEFTTURN_RIGHTEDGE:
        //printf("RIGHT_LEFT\n");
        change(num1);
        break;
    case INIT_RIGHTTURN_LEFTEDGE:
        set(rightturn_from_leftedge);
        COURSE = RIGHTTURN_LEFTEDGE;
        break;
    case RIGHTTURN_LEFTEDGE:
        change(num1);
        break;
    case INIT_RIGHTTURN_RIGHTEDGE:
        //printf("INIT_RIGHT_LEFT\n");
        set(rightturn_from_rightedge);
        COURSE = RIGHTTURN_RIGHTEDGE;
        break;
    case RIGHTTURN_RIGHTEDGE:
        //printf("RIGHT_LEFT\n");
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
    case INIT_FINISHE:
        set(finish);
        COURSE = FINISHE;
        break;
    case FINISHE:
        change(num1);
        break;
    case INIT_LUCKY:
        set(Rlucky);
        COURSE = LUCKY;
        break;
    case LUCKY:
        change(num1);
    case END:
        printf("END\n");
        return true;
    }
    return false;
}

void BlockSection::course(int direct)
{
    target = 2;
    pos = 0;
    master =  1;
    if(direct == 0)
    {
        //COURSE = INIT_FIRST_LCOURSE;
        num1 = 0;
    }
    else
    {
        //COURSE = INIT_FIRST_RCOURSE;
        num1 = 1;
    }

    if(target == 13)
    {
        COURSE = INIT_LUCKY;
    }
}

void BlockSection::change(int num2)
{
    if(target == pos)
    {
        COURSE = INIT_FINISHE;
        pos = 20;
        num1 = 10;
    }
    if(SectionManager::run())
    {
        if(pos == 20)
        {
            COURSE = END; 
        }
        if(num1 == 0)
        {
            if(master == 1)
            {
                switch (root)
                {
                case 0:
                    COURSE = INIT_FIRST_LCOURSE1;
                    pos = 13;
                    break;
                case 1:
                    COURSE = INIT_LEFTTURN_RIGHTEDGE;
                    break;
                case 2:
                    COURSE = INIT_BLUE_MARKER_LEFTEDGE;
                    pos = 9;
                    break;
                case 3:
                    COURSE = INIT_GREEN_MARKER_LEFTEDGE;
                    pos = 5;
                    break;
                case 4:
                    COURSE = INIT_GREEN_MARKER_LEFTEDGE;
                    pos = 1;
                    break;
                case 5:
                    COURSE = INIT_LEFTTURN_LEFTEDGE;
                    break;
                case 6:
                    COURSE = INIT_GREEN_MARKER_RIGHTEDGE;
                    pos = 2;
                    break;
                case 7:
                    COURSE = INIT_YELLOW_MARKER_RIGHTEDGE;
                    pos = 3;
                    break;
                case 8:
                    COURSE = INIT_YELLOW_MARKER_RIGHTEDGE;
                    pos = 4;
                    break;
                case 9:
                    COURSE = INIT_LEFTTURN_RIGHTEDGE;
                    break;
                case 10:
                    COURSE = INIT_YELLOW_MARKER_LEFTEDGE;
                    pos = 8;
                    break;
                case 11:
                    COURSE = INIT_RED_MARKER_LEFTEDGE;
                    pos = 12;
                    break;
                case 12:
                    COURSE = INIT_RED_MARKER_LEFTEDGE;
                    pos = 16;
                    break;
                case 13:
                    COURSE = INIT_LEFTTURN_LEFTEDGE;
                    break;
                case 14:
                    COURSE = INIT_RED_MARKER_RIGHTEDGE;
                    pos = 15;
                    break;
                case 15:
                    COURSE = INIT_BLUE_MARKER_RIGHTEDGE;
                    pos = 14;
                    break;
                case 16:
                    COURSE = INIT_LEFTTURN_RIGHTEDGE;
                    break;
                case 17:
                    COURSE = INIT_BLUE_MARKER_LEFTEDGE;
                    pos = 10;
                    break;
                case 18:
                    COURSE = INIT_GREEN_MARKER_LEFTEDGE;
                    pos = 6;
                    break;
                case 19:
                    COURSE = INIT_LEFTTURN_LEFTEDGE;
                    break;
                case 20:
                    COURSE = INIT_YELLOW_MARKER_RIGHTEDGE;
                    pos = 7;
                    break;
                case 21:
                    COURSE = INIT_LEFTTURN_RIGHTEDGE;
                    break;
                case 22:
                    COURSE = INIT_RED_MARKER_LEFTEDGE;
                    pos = 11;
                    break;
                case 23:
                    COURSE = INIT_LLAST1;
                    break;
                case 24:
                    COURSE = END;
                    break;
                }
            }
            else if (master == 2)
            {
                switch(root)
                {
                case 0:
                    COURSE = INIT_FIRST_LCOURSE2;
                    pos = 14;
                    break;
                case 1:
                    COURSE = INIT_RED_MARKER_LEFTEDGE;
                    pos = 15;
                    break;
                case 2:
                    COURSE = INIT_RED_MARKER_LEFTEDGE;
                    pos = 16;
                    break;
                case 3:
                    COURSE = INIT_RIGHTTURN_LEFTEDGE;
                    break;
                case 4:
                    COURSE = INIT_RED_MARKER_RIGHTEDGE;
                    pos = 12;
                    break;
                case 5:
                    COURSE = INIT_YELLOW_MARKER_RIGHTEDGE;
                    pos = 8;
                    break;
                case 6:
                    COURSE = INIT_YELLOW_MARKER_RIGHTEDGE;
                    pos = 4;
                    break;
                case 7:
                    COURSE = INIT_RIGHTTURN_RIGHTEDGE;
                    break;
                case 8:
                    COURSE = INIT_YELLOW_MARKER_LEFTEDGE;
                    pos = 3;
                    break;
                case 9:
                    COURSE = INIT_GREEN_MARKER_LEFTEDGE;
                    pos = 2;
                    break;
                case 10:
                    COURSE = INIT_GREEN_MARKER_LEFTEDGE;
                    pos = 1;
                    break;
                case 11:
                    COURSE = INIT_RIGHTTURN_LEFTEDGE;
                    break;
                case 12:
                    COURSE = INIT_GREEN_MARKER_RIGHTEDGE;
                    pos = 5;
                    break;
                case 13:
                    COURSE = INIT_BLUE_MARKER_RIGHTEDGE;
                    pos = 9;
                    break;
                case 14:
                    COURSE = INIT_RIGHTTURN_RIGHTEDGE;
                    break;
                case 15:
                    COURSE = INIT_BLUE_MARKER_LEFTEDGE;
                    pos = 10;
                    break;
                case 16:
                    COURSE = INIT_RED_MARKER_LEFTEDGE;
                    pos = 11;
                    break;
                case 17:
                    COURSE = INIT_RIGHTTURN_LEFTEDGE;
                    break;
                case 18:
                    COURSE = INIT_YELLOW_MARKER_RIGHTEDGE;
                    pos = 7;
                    break;
                case 19:
                    COURSE = INIT_RIGHTTURN_RIGHTEDGE;
                    break;
                case 20:
                    COURSE = INIT_GREEN_MARKER_LEFTEDGE;
                    pos = 6;
                    break;
                case 21:
                    COURSE = INIT_LLAST2;
                    break;
                case 22:
                    COURSE = END;
                    break;
                }
            }
            else if(master == 3)
            {
                switch (root)
                {
                case 0:
                    COURSE = INIT_FIRST_LCOURSE1;
                    pos = 13;
                    break;
                case 1:
                    COURSE = INIT_LEFTTURN_RIGHTEDGE;
                    break;
                case 2:
                    COURSE = INIT_BLUE_MARKER_LEFTEDGE;
                    pos = 9;
                    break;
                case 3:
                    COURSE = INIT_GREEN_MARKER_LEFTEDGE;
                    pos = 5;
                    break;
                case 4:
                    COURSE = INIT_GREEN_MARKER_LEFTEDGE;
                    pos = 1;
                    break;
                case 5:
                    COURSE = INIT_LEFTTURN_LEFTEDGE;
                    break;
                case 6:
                    COURSE = INIT_GREEN_MARKER_RIGHTEDGE;
                    pos = 2;
                    break;
                case 7:
                    COURSE = INIT_LEFTTURN_RIGHTEDGE;
                    break;
                case 8:
                    COURSE = INIT_GREEN_MARKER_LEFTEDGE;
                    pos = 6;
                    break;
                case 9:
                    COURSE = INIT_BLUE_MARKER_LEFTEDGE;
                    pos = 10;
                    break;
                case 10:
                    COURSE = INIT_BLUE_MARKER_LEFTEDGE;
                    pos = 14;
                    break;
                case 11:
                    COURSE = INIT_RIGHTTURN_LEFTEDGE;
                    break;
                case 12:
                    COURSE = INIT_RED_MARKER_RIGHTEDGE;
                    pos = 15;
                    break;
                case 13:
                    COURSE = INIT_RIGHTTURN_RIGHTEDGE;
                    break;
                case 14:
                    COURSE = INIT_RED_MARKER_LEFTEDGE;
                    pos = 11;
                    break;
                case 15:
                    COURSE = INIT_YELLOW_MARKER_LEFTEDGE;
                    pos = 7;
                    break;
                case 16:
                    COURSE = INIT_YELLOW_MARKER_LEFTEDGE;
                    pos = 3;
                    break;
                case 17:
                    COURSE = INIT_LEFTTURN_LEFTEDGE;
                    break;
                case 18:
                    COURSE = INIT_YELLOW_MARKER_RIGHTEDGE;
                    pos = 4;
                    break;
                case 19:
                    COURSE = INIT_LEFTTURN_RIGHTEDGE;
                    break;
                case 20:
                    COURSE = INIT_YELLOW_MARKER_LEFTEDGE;
                    pos = 8;
                    break;
                case 21:
                    COURSE = INIT_RED_MARKER_LEFTEDGE;
                    pos = 12;
                    break;
                case 22:
                    COURSE = INIT_RED_MARKER_LEFTEDGE;
                    pos = 16;
                    break;
                case 23:
                    COURSE = INIT_LLAST3;
                    break;
                case 24:
                    COURSE = END;
                    break;
                }
            }
            else if (master == 4)
            {
                switch(root)
                {
                    case 0:
                    COURSE = INIT_FIRST_LCOURSE2;
                    pos = 14;
                    break;
                case 1:
                    COURSE = INIT_RED_MARKER_LEFTEDGE;
                    pos = 15;
                    break;
                case 2:
                    COURSE = INIT_RED_MARKER_LEFTEDGE;
                    pos = 16;
                    break;
                case 3:
                    COURSE = INIT_RIGHTTURN_LEFTEDGE;
                    break;
                case 4:
                    COURSE = INIT_RED_MARKER_RIGHTEDGE;
                    pos = 12;
                    break;
                case 5:
                    COURSE = INIT_RIGHTTURN_RIGHTEDGE;
                    break;
                case 6:
                    COURSE = INIT_RED_MARKER_LEFTEDGE;
                    pos = 11;
                    break;
                case 7:
                    COURSE = INIT_BLUE_MARKER_LEFTEDGE;
                    pos = 10;
                    break;
                case 8:
                    COURSE = INIT_BLUE_MARKER_LEFTEDGE;
                    pos = 9;
                    break;
                case 9:
                    COURSE = INIT_LEFTTURN_LEFTEDGE;
                    break;
                case 10:
                    COURSE = INIT_GREEN_MARKER_RIGHTEDGE;
                    pos = 5;
                    break;
                case 11:
                    COURSE = INIT_LEFTTURN_RIGHTEDGE;
                    break;
                case 12:
                    COURSE = INIT_GREEN_MARKER_LEFTEDGE;
                    pos = 6;
                    break;
                case 13:
                    COURSE = INIT_YELLOW_MARKER_LEFTEDGE;
                    pos = 7;
                    break;
                case 14:
                    COURSE = INIT_YELLOW_MARKER_LEFTEDGE;
                    pos = 8;
                    break;
                case 15:
                    COURSE = INIT_RIGHTTURN_LEFTEDGE;
                    break;
                case 16:
                    COURSE = INIT_YELLOW_MARKER_RIGHTEDGE;
                    pos = 4;
                    break;
                case 17:
                    COURSE = INIT_RIGHTTURN_RIGHTEDGE;
                    break;
                case 18:
                    COURSE = INIT_YELLOW_MARKER_LEFTEDGE;
                    pos = 3;
                    break;
                case 19:
                    COURSE = INIT_GREEN_MARKER_LEFTEDGE;
                    pos = 2;
                    break;
                case 20:
                    COURSE = INIT_GREEN_MARKER_LEFTEDGE;
                    pos = 1;
                    break;
                case 21:
                    COURSE = INIT_LLAST4;
                    break;
                case 22:
                    COURSE = END;
                    break;
                }
            }
        }
        else
        {
            if(master == 1)
            {
                switch (root)
                {
                case 0:
                    COURSE = INIT_FIRST_RCOURSE1;
                    pos = 13;
                    break;
                case 1:
                    COURSE = INIT_RIGHTTURN_LEFTEDGE;
                    break;
                case 2:
                    COURSE = INIT_BLUE_MARKER_RIGHTEDGE;
                    pos = 9;
                    break;
                case 3:
                    COURSE = INIT_GREEN_MARKER_RIGHTEDGE;
                    pos = 5;
                    break;
                case 4:
                    COURSE = INIT_GREEN_MARKER_RIGHTEDGE;
                    pos = 1;
                    break;
                case 5:
                    COURSE = INIT_RIGHTTURN_RIGHTEDGE;
                    break;
                case 6:
                    COURSE = INIT_GREEN_MARKER_LEFTEDGE;
                    pos = 2;
                    break;
                case 7:
                    COURSE = INIT_YELLOW_MARKER_LEFTEDGE;
                    pos = 3;
                    break;
                case 8:
                    COURSE = INIT_YELLOW_MARKER_LEFTEDGE;
                    pos = 4;
                    break;
                case 9:
                    COURSE = INIT_RIGHTTURN_LEFTEDGE;
                    break;
                case 10:
                    COURSE = INIT_YELLOW_MARKER_RIGHTEDGE;
                    pos = 8;
                    break;
                case 11:
                    COURSE = INIT_RED_MARKER_RIGHTEDGE;
                    pos = 12;
                    break;
                case 12:
                    COURSE = INIT_RED_MARKER_RIGHTEDGE;
                    pos = 16;
                    break;
                case 13:
                    COURSE = INIT_RIGHTTURN_RIGHTEDGE;
                    break;
                case 14:
                    COURSE = INIT_RED_MARKER_LEFTEDGE;
                    pos = 15;
                    break;
                case 15:
                    COURSE = INIT_BLUE_MARKER_LEFTEDGE;
                    pos = 14;
                    break;
                case 16:
                    COURSE = INIT_RIGHTTURN_LEFTEDGE;
                    break;
                case 17:
                    COURSE = INIT_BLUE_MARKER_RIGHTEDGE;
                    pos = 10;
                    break;
                case 18:
                    COURSE = INIT_GREEN_MARKER_RIGHTEDGE;
                    pos = 6;
                    break;
                case 19:
                    COURSE = INIT_RIGHTTURN_RIGHTEDGE;
                    break;
                case 20:
                    COURSE = INIT_YELLOW_MARKER_LEFTEDGE;
                    pos = 7;
                    break;
                case 21:
                    COURSE = INIT_LEFTTURN_LEFTEDGE;
                    break;
                case 22:
                    COURSE = INIT_RED_MARKER_LEFTEDGE;
                    pos = 11;
                    break;
                case 23:
                    COURSE = INIT_RLAST1;
                    break;
                case 24:
                    COURSE = END;
                    break;
                }
            }
            else if (master == 2)
            {
                switch(root)
                {
                case 0:
                    COURSE = INIT_FIRST_RCOURSE2;
                    pos = 14;
                    break;
                case 1:
                    COURSE = INIT_RED_MARKER_RIGHTEDGE;
                    pos = 15;
                    break;
                case 2:
                    COURSE = INIT_RED_MARKER_RIGHTEDGE;
                    pos = 16;
                    break;
                case 3:
                    COURSE = INIT_RIGHTTURN_RIGHTEDGE;
                    break;
                case 4:
                    COURSE = INIT_RED_MARKER_LEFTEDGE;
                    pos = 12;
                    break;
                case 5:
                    COURSE = INIT_YELLOW_MARKER_LEFTEDGE;
                    pos = 8;
                    break;
                case 6:
                    COURSE = INIT_YELLOW_MARKER_LEFTEDGE;
                    pos = 4;
                    break;
                case 7:
                    COURSE = INIT_LEFTTURN_LEFTEDGE;
                    break;
                case 8:
                    COURSE = INIT_YELLOW_MARKER_RIGHTEDGE;
                    pos = 3;
                    break;
                case 9:
                    COURSE = INIT_GREEN_MARKER_RIGHTEDGE;
                    pos = 2;
                    break;
                case 10:
                    COURSE = INIT_GREEN_MARKER_RIGHTEDGE;
                    pos = 1;
                    break;
                case 11:
                    COURSE = INIT_LEFTTURN_RIGHTEDGE;
                    break;
                case 12:
                    COURSE = INIT_GREEN_MARKER_LEFTEDGE;
                    pos = 5;
                    break;
                case 13:
                    COURSE = INIT_BLUE_MARKER_LEFTEDGE;
                    pos = 9;
                    break;
                case 14:
                    COURSE = INIT_LEFTTURN_LEFTEDGE;
                    break;
                case 15:
                    COURSE = INIT_BLUE_MARKER_RIGHTEDGE;
                    pos = 10;
                    break;
                case 16:
                    COURSE = INIT_RED_MARKER_RIGHTEDGE;
                    pos = 11;
                    break;
                case 17:
                    COURSE = INIT_LEFTTURN_RIGHTEDGE;
                    break;
                case 18:
                    COURSE = INIT_YELLOW_MARKER_LEFTEDGE;
                    pos = 7;
                    break;
                case 19:
                    COURSE = INIT_RIGHTTURN_LEFTEDGE;
                    break;
                case 20:
                    COURSE = INIT_GREEN_MARKER_RIGHTEDGE;
                    pos = 6;
                    break;
                case 21:
                    COURSE = INIT_RLAST2;
                    break;
                case 22:
                    COURSE = END;
                    break;
                }
            }
            else if(master == 3)
            {
                switch (root)
                {
                case 0:
                    COURSE = INIT_FIRST_RCOURSE1;
                    pos = 13;
                    break;
                case 1:
                    COURSE = INIT_RIGHTTURN_LEFTEDGE;
                    break;
                case 2:
                    COURSE = INIT_BLUE_MARKER_RIGHTEDGE;
                    pos = 9;
                    break;
                case 3:
                    COURSE = INIT_GREEN_MARKER_RIGHTEDGE;
                    pos = 5;
                    break;
                case 4:
                    COURSE = INIT_GREEN_MARKER_RIGHTEDGE;
                    pos = 1;
                    break;
                case 5:
                    COURSE = INIT_RIGHTTURN_RIGHTEDGE;
                    break;
                case 6:
                    COURSE = INIT_GREEN_MARKER_LEFTEDGE;
                    pos = 2;
                    break;
                case 7:
                    COURSE = INIT_RIGHTTURN_LEFTEDGE;
                    break;
                case 8:
                    COURSE = INIT_GREEN_MARKER_RIGHTEDGE;
                    pos = 6;
                    break;
                case 9:
                    COURSE = INIT_BLUE_MARKER_RIGHTEDGE;
                    pos = 10;
                    break;
                case 10:
                    COURSE = INIT_BLUE_MARKER_RIGHTEDGE;
                    pos = 14;
                    break;
                case 11:
                    COURSE = INIT_LEFTTURN_RIGHTEDGE;
                    break;
                case 12:
                    COURSE = INIT_RED_MARKER_LEFTEDGE;
                    pos = 15;
                    break;
                case 13:
                    COURSE = INIT_LEFTTURN_LEFTEDGE;
                    break;
                case 14:
                    COURSE = INIT_RED_MARKER_RIGHTEDGE;
                    pos = 11;
                    break;
                case 15:
                    COURSE = INIT_YELLOW_MARKER_RIGHTEDGE;
                    pos = 7;
                    break;
                case 16:
                    COURSE = INIT_YELLOW_MARKER_RIGHTEDGE;
                    pos = 3;
                    break;
                case 17:
                    COURSE = INIT_RIGHTTURN_RIGHTEDGE;
                    break;
                case 18:
                    COURSE = INIT_YELLOW_MARKER_LEFTEDGE;
                    pos = 4;
                    break;
                case 19:
                    COURSE = INIT_RIGHTTURN_LEFTEDGE;
                    break;
                case 20:
                    COURSE = INIT_YELLOW_MARKER_RIGHTEDGE;
                    pos = 8;
                    break;
                case 21:
                    COURSE = INIT_RED_MARKER_RIGHTEDGE;
                    pos = 12;
                    break;
                case 22:
                    COURSE = INIT_RED_MARKER_RIGHTEDGE;
                    pos = 16;
                    break;
                case 23:
                    COURSE = INIT_RLAST3;
                    break;
                case 24:
                    COURSE = END;
                    break;
                }
            }
            else if (master == 4)
            {
                switch(root)
                {
                case 0:
                    COURSE = INIT_FIRST_RCOURSE2;
                    pos = 14;
                    break;
                case 1:
                    COURSE = INIT_RED_MARKER_RIGHTEDGE;
                    pos = 15;
                    break;
                case 2:
                    COURSE = INIT_RED_MARKER_RIGHTEDGE;
                    pos = 16;
                    break;
                case 3:
                    COURSE = INIT_LEFTTURN_RIGHTEDGE;
                    break;
                case 4:
                    COURSE = INIT_RED_MARKER_LEFTEDGE;
                    pos = 12;
                    break;
                case 5:
                    COURSE = INIT_LEFTTURN_LEFTEDGE;
                    break;
                case 6:
                    COURSE = INIT_RED_MARKER_RIGHTEDGE;
                    pos = 11;
                    break;
                case 7:
                    COURSE = INIT_BLUE_MARKER_RIGHTEDGE;
                    pos = 10;
                    break;
                case 8:
                    COURSE = INIT_BLUE_MARKER_RIGHTEDGE;
                    pos = 9;
                    break;
                case 9:
                    COURSE = INIT_RIGHTTURN_RIGHTEDGE;
                    break;
                case 10:
                    COURSE = INIT_GREEN_MARKER_LEFTEDGE;
                    pos = 5;
                    break;
                case 11:
                    COURSE = INIT_RIGHTTURN_LEFTEDGE;
                    break;
                case 12:
                    COURSE = INIT_GREEN_MARKER_RIGHTEDGE;
                    pos = 6;
                    break;
                case 13:
                    COURSE = INIT_YELLOW_MARKER_RIGHTEDGE;
                    pos = 7;
                    break;
                case 14:
                    COURSE = INIT_YELLOW_MARKER_RIGHTEDGE;
                    pos = 8;
                    break;
                case 15:
                    COURSE = INIT_LEFTTURN_RIGHTEDGE;
                    break;
                case 16:
                    COURSE = INIT_YELLOW_MARKER_LEFTEDGE;
                    pos = 4;
                    break;
                case 17:
                    COURSE = INIT_LEFTTURN_LEFTEDGE;
                    break;
                case 18:
                    COURSE = INIT_YELLOW_MARKER_RIGHTEDGE;
                    pos = 3;
                    break;
                case 19:
                    COURSE = INIT_GREEN_MARKER_RIGHTEDGE;
                    pos = 2;
                    break;
                case 20:
                    COURSE = INIT_GREEN_MARKER_RIGHTEDGE;
                    pos = 1;
                    break;
                case 21:
                    COURSE = INIT_RLAST4;
                    break;
                case 22:
                    COURSE = END;
                    break;
                }
            }
        }
        root++; 
    }      
}

    