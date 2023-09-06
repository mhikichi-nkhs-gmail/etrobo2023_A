#include "BlockSection.h"
#include "Section.h"
BlockSection::BlockSection()
{
    mSectionIdx=0;
    mLastIdx=0;
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
            set(In_Block);
            set_flag=1;
        }
        else
        {
            in_block();
            now_position=position[pattern-1][0];
        }
        
    }
    else
    {
        if(red_position == now_position)
        {
            if(set_flag==0)
            {
                set(Goal);
                set_flag=1;
            }
            else
            {
                goal();
            }

        }
        else
        {
            if(blue_position1 == now_position || blue_position2 == now_position)
            {
                if(set_flag==0)
                {
                    set(Move_Block);
                    set_flag=1;
                }
                else
                {
                    move_block();
                    
                }
            }
            else
            {
                if(set_flag==0)
                {
                    set(Next_Circle);
                    set_flag=1;
                }
                else
                {
                    
                    next_circle(position_angle[pattern-1][position-1],position_h[position-1],position_s[position-1],position_angle[pattern-1][position-1]);
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
        course_flag = 1;
    }
    else
    {
        course_flag = -1;
    }
}

void BlockSection::next_circle(double TA,double H,double S,int e)
{
    turn_angle=TA;
    hh=H;
    ss=S;
    if(TA==0)
    {
        in_length=2.5;
        out_length=2.5;
    }
    else
    {
        switch(e)
        {
            case 1://rr
                in_length=2.5;
                out_length=2.5;
                break;
            case 2://rl
                in_length=2.5;
                out_length=2.5;
                break;
            case -2://lr
                in_length=2.5;
                out_length=2.5;
                break;
            case -1://ll
                in_length=2.5;
                out_length=2.5;
                break;
        }
    }
    if(SectionManager::run())
    {
        count++;
        now_position=position[pattern-1][count];
        set_flag=0;
        
    }
}

void BlockSection::goal(double t,double l)
{
    turn_angle=t;
    switch(e)
    {
        case 1://rr
            in_length=2.5;
            out_length=2.5;
            break;
        case 2://rl
            in_length=2.5;
            out_length=2.5;
            break;
        case -2://lr
            in_length=2.5;
            out_length=2.5;
            break;
        case -1://ll
            in_length=2.5;
            out_length=2.5;
            break;
    }
    if(SectionManager::run())
    {
        set_flag=0;
    }
}

void BlockSection::move_block()
{
    if(SectionManager::run())
    {
        count++;
        now_position=position[pattern-1][count];
        set_flag=0;
    }
}
void BlockSection::in_block()
{
    if(SectionManager::run())
    {
        set_flag=0;
    }
}
