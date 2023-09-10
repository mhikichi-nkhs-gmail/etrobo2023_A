#include "BlockSection.h"
#include "Section.h"
BlockSection::BlockSection()
{
    mSectionIdx=0;
    mLastIdx=0;
    now_position=-1;
}

bool BlockSection::run()
{   
    if(now_position==0)
    {
        return true;
    }
    if(now_position == -1)
    {
        if(set_flag==0)
        {
            printf("set_block\n");
            if(course_flag==1)
            {
                set(RIn_Block);
            }
            else
            {
                //set(LIn_Block);
            }
            set_flag=1;
        }
        else
        {
            in_block();
            //printf("in_block\n");
        }
        
    }
    else
    {
        if(red_position == now_position)
        {
            switch(set_flag)
            {
                case 0:
                    switch(position_direction[pattern-1][count])
                    {
                        case left:
                            set(Goal_left);
                            break;
                        case right:
                            set(Goal_right);
                            break;
                        case front:
                            set(Goal_front);
                            break;
                        case behind:
                            set(Goal_behind);
                            break;
                    }
                    set_flag=1;
                    break;
                case 1:
                    preparation_goal();
                    break;
                case 2:
                    break;
                case 3:
                    break;
            }

        }
        else
        {
            if(blue_position1 == now_position || blue_position2 == now_position)
            {
                if(set_flag==0)
                {
                    //set(Move_Block);
                    set_flag=1;
                }
                else
                {
                    //move_block();
                }
            }
            else
            {
                if(set_flag==0)
                {
                    //printf("position_angle = %d\n",position_angle[pattern-1][count]);
                    switch(course_flag*position_angle[pattern-1][count])
                    {
                        case 0:
                            printf("set_strate\n");
                            set(strate);
                            break;
                        case 90:
                            printf("set_left_turn\n");
                            set(left_turn);
                            break;
                        case 180:
                            printf("set_behind\n");
                            set(behind_turn);
                            break;
                        case -180:
                            printf("set_behind\n");
                            set(behind_turn);
                            break;
                        case -90:
                            printf("set_right_turn\n");
                            set(right_turn);
                            break;
                    }
                    set_flag=1;
                }
                if(set_flag==1)
                {
                    turn();
                }
                if(set_flag==2)
                {
                    switch(position_color[pattern-1][count+1])
                    {
                        case RED:
                        printf("set_Red\n");
                            if(position_edge[pattern-1][count+1]==0)
                            {
                                set(Next_Red_Circle);
                            }
                            else
                            {
                                set(Next_Red_Circle_OPPOSITION);
                            }
                            break;
                        case BLUE:
                            printf("set_Blue\n");
                            if(position_edge[pattern-1][count+1]==0)
                            {
                                set(Next_Blue_Circle);
                            }
                            else
                            {
                                set(Next_Blue_Circle_OPPOSITION);
                            }
                            break;
                        case GREAN:
                            printf("set_Grean\n");
                            if(position_edge[pattern-1][count+1]==0)
                            {
                                set(Next_Grean_Circle);
                            }
                            else
                            {
                                set(Next_Grean_Circle_OPPOSITION);
                            }
                            break;
                        case YELLOW:
                            printf("set_Yellow\n");
                            if(position_edge[pattern-1][count+1]==0)
                            {
                                set(Next_Yellow_Circle);
                            }
                            else
                            {
                                set(Next_Yellow_Circle_OPPOSITION);
                            }
                            break;
                    }

                    printf("set_next_circle\n");
                    set_flag=3;
                }
                if(set_flag==3)
                {
                    //printf("next_circle\n");
                    next_circle();
                }
                
            }

        }
    }
    return false;
}

void BlockSection::course(int direct)
{
    if(direct == 0)
    {
        //printf("left\n");
        course_flag = -1;
    }
    else
    {
        //printf("right\n");
        course_flag = 1;
    }
}

void BlockSection::next_circle()
{
    

    if(SectionManager::run())
    {
        count++;
        if(count+1==16)
        {
            count--;
        }
        now_position=position[pattern-1][count];
        set_flag=0;
        
    }
}


void BlockSection::goal()
{

    if(SectionManager::run())
    {
        set_flag=0;
    }
}

void BlockSection::move_block()
{
    if(SectionManager::run())
    {
        if(blue_position1 == now_position)
        {
            blue_position1=-2;
        }
        else
        {
            blue_position2=-2;
        }
        set_flag=0;
    }
}
void BlockSection::in_block()
{
    if(SectionManager::run())
    {
        set_flag=0;
        now_position=13;
    }
}

void BlockSection::turn()
{
    if(SectionManager::run())
    {
        set_flag=2;
    }
}

void BlockSection::preparation_goal()
{

    if(SectionManager::run())
    {
        set_flag=2;
    }
}