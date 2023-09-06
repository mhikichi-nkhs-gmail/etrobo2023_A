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
        void goal(double t,double l);
        void move_block();
        void in_block();

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
        int red_position = -2;
        int blue_position1 = -2;
        int blue_position2 = -2;
        int course_flag;
        int set_flag=0;
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
                             {-90,0,0,-90,0,-90,-90,0,0,0,0,0,-90,-90,0,-90},
                             {90,0,0,90,0,0,90,0,90,0,90,0,-180,0,0,90},
                             {-90,-90,-90-90,0,0,0,0,0,0,0,0,-90,90,90,0},
                             {0,0,0,90,-90,0,0,90,-90,0,0,90,-180,0,0,90}
                            };
        int position_edge[4][16]=
                            {
                             {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                             {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                             {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                             {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
                            };
        double position_h[4][16]=
                            {
                             {180,48,48,48,180,48,340,340,180,180,0,340,203,203,203,340},
                             {180,180,180,48,203,0,180,48,203,340,48,340,203,340.340,340},
                             {180,180,48,48,180,203,48,340,180,203,48,340,203,340,340,0},
                             {0,180,180,48,180,48,48,48,180,203,203,340,203,340,340,340}
                            };
        double position_s[4][16]=
                            {
                             {0.05,0.16,0.16,0.16,0.05,0.16,0.04,0.04,0.05,0.05,0,0.04,0.13,0.13,0.13,0.04},
                             {0.05,0.05,0.05,0.16,0.13,0,0.05,0.16,0.13,0.04,0.16,0.04,0.13,0.04,0.04,0.04},
                             {0.05,0.05,0.16,0.16,0.05,0.13,0.16,0.16,0.04,0.13,0.16,0.04,0.13,0.04,0.04,0},
                             {0,0.05,0.05,0.16,0.05,0.16,0.16,0.16,0.05,0.13,0.13,0.04,0.13,0.04,0.04,0.04}
                            };
        //double position_s[16]={1,,0.16,0.16,0.05,0.05,0.16,0.16,0.13,0.13,0.04,0.04,0.13,0.13,0.04,0.04};
        double hh;
        double ss;
        double turn_angle;
        double in_length;
        double out_length;

        SecParam In_Block_[15] = {
            {Section::TWALKER,{50},Section::TURNANGLE,{85, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-55, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{-15, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-50},Section::TURNANGLE,{95, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{203,0.14, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Next_Circle[5]={
            {Section::VIRSLINE,{40, 0, 0, 28, 2.5 ,1.2},Section::LENGTH,{in_length, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{60,0},Section::TURNANGLE,{turn_angle,Section::RESETANG},Section::EMNONE,{}},
            {Section::VIRSLINE,{40, 0, 0, 28, 2.5 ,1.2},Section::LENGTH,{out_length, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{hh,ss, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Move_Block[5]={
            {Section::TWALKER,{45,0},Section::TURNANGLE,{45,Section::RESETANG},Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,1.2},Section::LENGTH,{15, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-45, 0, 0, 28, 2.5 ,1.2},Section::LENGTH,{15, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{45,0},Section::TURNANGLE,{-45,Section::RESETANG},Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};
        
        SecParam Goal[5]={
            {Section::TWALKER,{60,0},Section::TURNANGLE,{90,Section::RESETANG},Section::EMNONE,{}},
            {Section::VIRSLINE,{55, 0, 0, 28, 2.5 ,1.2},Section::LENGTH,{50, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-55, 0, 0, 28, 2.5 ,1.2},Section::LENGTH,{50, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{60,0},Section::TURNANGLE,{-90,Section::RESETANG},Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};
        
};
#endif