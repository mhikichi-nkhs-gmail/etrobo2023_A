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
        void next_circle();
        void goal();
        void move_block();
        void in_block();
        void turn();
        void preparation_goal();

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
        int pattern=1;

        enum color{
            RED,
            GREAN,
            BLUE,
            YELLOW
        };

        enum direction{
            front,
            behind,
            left,
            right
        };

        int position[4][16] =
                            {
                             {13,9,5,1,2,3,4,8,12,16,15,14,10,6,7,11},
                             {13,14,15,16,12,8,4,3,2,1,5,9,10,11,7,6},
                             {13,9,5,1,2,6,10,14,15,11,7,3,4,8,12,16},
                             {13,14,15,16,12,11,10,9,5,6,7,8,4,3,2,1}
                            };
        int position_edge[4][16] =
                            {
                             {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
                             {-1,-1,-1,-1,-1,-1,-1,1,1,1,1,-1,-1,-1,-1,-1},
                             {-1,-1,-1,-1,-1,-1,-1,-1,1,1,1,1,-1,-1,-1,-1},
                             {13,14,15,16,12,11,10,9,5,6,7,8,4,3,2,1}
                            };
        int position_angle[4][16] =
                            {
                             {-90,0,0,-90,0,0,-90,0,0,-90,0,-90,0,-90,-90,0},
                             {180,0,0,90,0,0,90,0,0,90,0,90,0,90,90,0},
                             {-90,0,0,-90,-90,0,0,90,90,0,0,-90,-90,0,0,0},
                             {180,0,0,90,90,0,0,-90,-90,0,0,90,90,0,0,0}
                            };
        direction position_direction[4][16] =
                            {
                             {left,front,front,front,right,right,right,behind,behind,behind,left,left,front,front,right,behind},
                             {left,right,right,right,front,front,front,left,left,left,behind,behind,right,right,front,left},
                             {left,front,front,front,right,behind,behind,behind,right,front,front,front,right,behind,behind,behind},
                             {left,right,right,right,front,left,left,left,front,right,right,right,front,left,left,left}
                            };
        color position_color[4][16]=
                            {
                             {BLUE,BLUE,GREAN,GREAN,GREAN,YELLOW,YELLOW,YELLOW,RED,RED,RED,BLUE,BLUE,GREAN,YELLOW,RED},
                             {BLUE,BLUE,RED,RED,RED,YELLOW,YELLOW,YELLOW,GREAN,GREAN,GREAN,BLUE,BLUE,RED,YELLOW,GREAN},
                             {BLUE,BLUE,GREAN,GREAN,GREAN,GREAN,BLUE,BLUE,RED,RED,YELLOW,YELLOW,YELLOW,YELLOW,RED,RED},
                             {BLUE,BLUE,RED,RED,RED,RED,BLUE,BLUE,GREAN,GREAN,YELLOW,YELLOW,YELLOW,YELLOW,GREAN,GREAN}
                            };

        SecParam RIn_Block[15] = {
            {Section::TWALKER,{-60},Section::TURNANGLE,{55, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{60, 0, 0, 28, 2.5 ,1.2,1},Section::LENGTH,{30, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 0, 0, 25, 2.5 ,2.0,1},Section::BRIGHTNESS,{-1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,1.2,1},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-60},Section::TURNANGLE,{105, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{203,0.14, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Next_Blue_Circle[15]={
            //{Section::VIRSLINE,{40, 0, 0, 28, 2.5 ,1.2},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{203,0.13, Section::RESETLEN}, Section::EMNONE,{}},

            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};
        
        SecParam Next_Blue_Circle_OPPOSITION[15]={
            //{Section::VIRSLINE,{40, 0, 0, 28, 2.5 ,1.2},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, _OPPOSITION_EDGE},Section::COLOR,{203,0.13, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Next_Red_Circle[15]={
            //{Section::VIRSLINE,{40, 0, 0, 28, 2.5 ,1.2},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{340,0.04, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Next_Red_Circle_OPPOSITION[15]={
            //{Section::VIRSLINE,{40, 0, 0, 28, 2.5 ,1.2},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, _OPPOSITION_EDGE},Section::COLOR,{340,0.04, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Next_Grean_Circle[15]={
            //{Section::VIRSLINE,{40, 0, 0, 28, 2.5 ,1.2},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::VIRSLINE,{38, 0, 0, 28, 2.5 ,1.2,1},Section::COLOR,{140,0.2, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{141,0.2, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Next_Grean_Circle_OPPOSITION[15]={
            //{Section::VIRSLINE,{40, 0, 0, 28, 2.5 ,1.2},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::VIRSLINE,{38, 0, 0, 28, 2.5 ,1.2,1},Section::COLOR,{140,0.2, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, _OPPOSITION_EDGE},Section::COLOR,{141,0.2, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Next_Yellow_Circle[15]={
            //{Section::VIRSLINE,{40, 0, 0, 28, 2.5 ,1.2},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{12, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{48,0.16, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};
        
        SecParam Next_Yellow_Circle_OPPOSITION[15]={
            //{Section::VIRSLINE,{40, 0, 0, 28, 2.5 ,1.2},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{12, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, _OPPOSITION_EDGE},Section::COLOR,{48,0.16, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam strate[5]={
            {Section::VIRSLINE,{40, 0, 0, 28, 2.5 ,1.2,1},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam right_turn[5]={
            {Section::VIRSLINE,{40, 0, 0, 28, 2.5 ,1.2,1},Section::LENGTH,{4.5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{60},Section::TURNANGLE,{-83, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{40, 0, 0, 28, 2.5 ,1.2,1},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam left_turn[5]={
            {Section::VIRSLINE,{40, 0, 0, 28, 2.5 ,1.2,1},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-60},Section::TURNANGLE,{83, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{40, 0, 0, 28, 2.5 ,1.2,1},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};
        
        SecParam behind_turn[5]={
            {Section::TWALKER,{-55},Section::TURNANGLE,{180, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Move_Block[5]={
            {Section::TWALKER,{45,0},Section::TURNANGLE,{45,Section::RESETANG},Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,1.2,1},Section::LENGTH,{15, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-45, 0, 0, 28, 2.5 ,1.2,1},Section::LENGTH,{15, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{45,0},Section::TURNANGLE,{-45,Section::RESETANG},Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};
        
        SecParam Goal[5]={
            {Section::TWALKER,{-60,0},Section::TURNANGLE,{90,Section::RESETANG},Section::EMNONE,{}},
            {Section::VIRSLINE,{55, 0, 0, 28, 2.5 ,1.2,0},Section::LENGTH,{50, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-55, 0, 0, 28, 2.5 ,1.2,0},Section::LENGTH,{50, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{60,0},Section::TURNANGLE,{-90,Section::RESETANG},Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Goal_left[5]={
            {Section::VIRSLINE,{40, 0, 0, 28, 2.5 ,1.2,1},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-60},Section::TURNANGLE,{83, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{40, 0, 0, 28, 2.5 ,1.2,1},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Goal_right[5]={
            {Section::VIRSLINE,{40, 0, 0, 28, 2.5 ,1.2,1},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-60},Section::TURNANGLE,{83, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{40, 0, 0, 28, 2.5 ,1.2,1},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Goal_front[5]={
            {Section::VIRSLINE,{40, 0, 0, 28, 2.5 ,1.2,1},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-60},Section::TURNANGLE,{83, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{40, 0, 0, 28, 2.5 ,1.2,1},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Goal_behind[5]={
            {Section::VIRSLINE,{40, 0, 0, 28, 2.5 ,1.2,1},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-60},Section::TURNANGLE,{83, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{40, 0, 0, 28, 2.5 ,1.2,1},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};
            //120,80,50,20
        
};
#endif