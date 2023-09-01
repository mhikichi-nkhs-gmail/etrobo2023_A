#ifndef _BLOCK_SECTION_H_
#define _BLOCK_SECTION_H_
#include "SectionManager.h"
#include "HackEv3.h"

class BlockSection : public SectionManager  
{  
    public:

        BlockSection();
        bool run();
        void course(int direct);
        void next_circle(double TA,double H,double S,int e);



    protected:
        

#if defined(MAKE_RIGHT)
    const int _EDGE = LineTracer::LEFTEDGE;
    const int _OPPOSITION_EDGE = LineTracer::RIGHTEDGE;
#else
    const int _EDGE = LineTracer::RIGHTEDGE;
    const int _OPPOSITION_EDGE = LineTracer::LEFTEDGE;
#endif


    private:
        int now_position = -1;
        int red_position = 2;
        int blue_position1 = 3;
        int blue_position2 = 4;
        int course_flag;
        int count=0;
        int pattern=0;
        int position[4][16] =
                            {
                             {13,9,5,1,2,3,4,8,12,16,15,14,10,6,7,11},
                             {13,14,15,16,12,8,4,3,2,1,5,9,10,11,7,6},
                             {13,9,5,1,2,6,10,14,15,11,7,3,4,8,12,16},
                             {13,14,15,16,12,11,10,9,5,6,7,8,4,3,2,1}
                            };
        double position_angle[4][16] =
                            {
                             {-90,0,0,-90,0,-90,-90,0,0,0,0,0,0,-90,0,-90},
                             {90,0,0,90,0,0,90,0,90,0,90,0,-90,0,0,90},
                             {-90,-90,-90-90,0,0,0,0,0,0,0,0,0,90,90,0},
                             {0,0,0,90,-90,0,0,90,-90,0,0,90,-90,0,0,90},
                            };
        int position_edge[4][16];
        double hh;
        double ss;
        double turn_angle;
        double in_length;
        double out_length;

        SecParam In_Block[15] = {
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{55, -25, 0, 28, 2.5 ,1.2},Section::LENGTH,{2.5, Section::RESETLEN}, Section::EMNONE,{}},
            
            
            {Section::TWALKER,{-90},Section::TURNANGLE,{75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-55, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{-15, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{55, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{15, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{60},Section::TURNANGLE,{-75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Next_Circle[5]={
            {Section::VIRSLINE,{55, 0, 0, 28, 2.5 ,1.2},Section::LENGTH,{in_length, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{60,0},Section::TURNANGLE,{turn_angle,Section::RESETANG},Section::EMNONE,{}},
            {Section::VIRSLINE,{55, 0, 0, 28, 2.5 ,1.2},Section::LENGTH,{out_length, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{hh,ss, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Move_Block[5]={
            {Section::TWALKER,{60,0},Section::TURNANGLE,{turn_angle,Section::RESETANG},Section::EMNONE,{}},
            {Section::VIRSLINE,{55, 0, 0, 28, 2.5 ,1.2},Section::LENGTH,{in_length, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-55, 0, 0, 28, 2.5 ,1.2},Section::LENGTH,{in_length, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{60,0},Section::TURNANGLE,{turn_angle_,Section::RESETANG},Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam sisoukai[]={
            {Section::TWALKER,{60,0},Section::TURNANGLE,{course_flag*-90,Section::RESETANG},Section::EMNONE,{}},
            {Section::VIRSLINE,{55, 0, 0, 28, 2.5 ,1.2},Section::LENGTH,{55, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _OPPOSITION_EDGE},Section::COLOR,{hh,ss, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{55, 0, 0, 28, 2.5 ,1.2},Section::LENGTH,{8, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _OPPOSITION_EDGE},Section::COLOR,{hh,ss, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{55, 0, 0, 28, 2.5 ,1.2},Section::LENGTH,{8, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _OPPOSITION_EDGE},Section::COLOR,{hh,ss, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{55, 0, 0, 28, 2.5 ,1.2},Section::LENGTH,{60, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{60,0},Section::TURNANGLE,{course_flag*90,Section::RESETANG},Section::EMNONE,{}},


        };

        

        
};
#endif