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
    if(now_position_ == -1)
    {
        set(In_Block_);
        now_position_=position_[pattern_][0];
    }
    else
    {
        if(red_position_ == now_position_)
        {

        }
        else
        {
            if(blue_position1_ == now_position_)
            {

            }
            else
            {
                if(blue_position2_ == now_position_)
                {

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
        course_flag_ = 1;
    }
    else
    {
        course_flag_ = -1;
    }
}

void BlockSection::next_circle__(double TA,double H_,double S_,int f_)
{
    turn_angle_=TA;
    hh_=H_;
    ss_=S_;
    if(TA==0)
    {
        in_length_=2.5;
        out_length_=2.5;
    }
    else
    {
        switch(position_edge_[pattern_][now_position_])
        {
            case 1://rr
                in_length_=2.5;
                out_length_=2.5;
                break;
            case 2://rl
                in_length_=2.5;
                out_length_=2.5;
                break;
            case -2://lr
                in_length_=2.5;
                out_length_=2.5;
                break;
            case -1://ll
                in_length_=2.5;
                out_length_=2.5;
                break;
        }
    }
    if(SectionManager::run())
    {
        set(Next_Circle_);
        count_++;
        now_position_=position_[pattern_][count_];
        
    }
}

