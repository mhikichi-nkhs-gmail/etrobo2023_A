#include "BlockSection.h"
#include "Section.h"

BlockSection::BlockSection()
{
    mSectionIdx=0;
    mLastIdx=0;
}

bool BlockSection::run()
{   
    switch(now_position)
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

void BlockSection::next_circle(double TA,double H,double S,enum Edge_Pattern)
{
    turn_angle=TA;
    h=H;
    s=S;
    if(TA==0)
    {
        in_length=2.5;
        out_length=2.5;
    }
    else
    {
        switch(position_edge[pattern][now_position])
        {
            case 1://rr
                in_length=2.5;
                out_length=2.5;
                break;
            case 2//rl
                in_length=2.5;
                out_length=2.5;
                break;
            case -2//lr
                in_length=2.5;
                out_length=2.5;
                break;
            case -1//ll
                in_length=2.5;
                out_length=2.5;
                break;
        }
    }
    if(SectionManager::run())
    {
        set(Next_Circle);
        count++;
        now_position=position[pattern][count];
        
    }
}

