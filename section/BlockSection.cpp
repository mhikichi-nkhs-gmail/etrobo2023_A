#include "BlockSection.h"
#include "Section.h"

BlockSection::BlockSection()
{
    mSectionIdx=0;
    mLastIdx=0;
}

bool BlockSection::run()
{   
    /*switch(now_position)
    {
    case -1:
        set(In_Block);
        now_position=position[pattern][0];
        break;
    case red_position:
        break;
    case blue_position1:
        break;
    case blue_position2:
        break;
    default:
        break;
    }*/
    if(now_position == -1)
    {
        set(sisoukai);
        now_position=position[pattern-1][0];
        return true;
    }
    else
    {
        if(red_position == now_position)
        {

        }
        else
        {
            if(blue_position1 == now_position || blue_position2 == now_position)
            {
                set(Move_Block);
            }
            else
            {
                next_circle(position_angle[pattern-1][position-1],position_h[pattern-1][position-1],position_s[pattern-1][position-1],position_angle[pattern-1][position-1]);
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
        switch(position_edge[pattern-1][now_position-1])
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
        set(Next_Circle);
        count++;
        now_position=position[pattern-1][count];
        
    }
}
