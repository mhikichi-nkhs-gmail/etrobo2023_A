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
        void change(int num2);


        enum BLOCK{
            INIT_FIRST_LCOURSE1,
            FIRST_LCOURSE1,

            INIT_FIRST_LCOURSE2,
            FIRST_LCOURSE2,

            INIT_FIRST_RCOURSE1,
            FIRST_RCOURSE1,

            INIT_FIRST_RCOURSE2,
            FIRST_RCOURSE2,

            INIT_RED_MARKER_LEFTEDGE,
            RED_MARKER_LEFTEDGE,

            INIT_RED_MARKER_RIGHTEDGE,
            RED_MARKER_RIGHTEDGE,

            INIT_BLUE_MARKER_LEFTEDGE,
            BLUE_MARKER_LEFTEDGE,

            INIT_BLUE_MARKER_RIGHTEDGE,
            BLUE_MARKER_RIGHTEDGE,

            INIT_YELLOW_MARKER_LEFTEDGE,
            YELLOW_MARKER_LEFTEDGE,

            INIT_YELLOW_MARKER_RIGHTEDGE,
            YELLOW_MARKER_RIGHTEDGE,

            INIT_GREEN_MARKER_LEFTEDGE,
            GREEN_MARKER_LEFTEDGE,

            INIT_GREEN_MARKER_RIGHTEDGE,
            GREEN_MARKER_RIGHTEDGE,

            INIT_LEFTTURN_LEFTEDGE,
            LEFTTURN_LEFTEDGE,

            INIT_LEFTTURN_RIGHTEDGE,
            LEFTTURN_RIGHTEDGE,

            INIT_RIGHTTURN_LEFTEDGE,
            RIGHTTURN_LEFTEDGE,

            INIT_RIGHTTURN_RIGHTEDGE,
            RIGHTTURN_RIGHTEDGE,

            INIT_LLAST1,
            LLAST1,

            INIT_LLAST2,
            LLAST2,

            INIT_LLAST3,
            LLAST3,

            INIT_LLAST4,
            LLAST4,

            INIT_RLAST1,
            RLAST1,

            INIT_RLAST2,
            RLAST2,

            INIT_RLAST3, 
            RLAST3,

            INIT_RLAST4, 
            RLAST4,

            INIT_FINISHE,
            FINISHE,

            INIT_LUCKY,
            LUCKY,

            END
        };

    protected:

#if defined(MAKE_RIGHT)
    const int _EDGE = LineTracer::LEFTEDGE;
#else
    const int _EDGE = LineTracer::RIGHTEDGE;
#endif

        BLOCK COURSE;

    private:
        int num1;
        int root = 0;
        int master;
        int pos;
        int target;

        SecParam Lfirst_left[10] = {
            {Section::TWALKER,{60},Section::TURNANGLE,{-60, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, -60, 0, 28, 2.5 ,5.0,0},Section::LENGTH,{55, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, 60, 0, 28, 2.5 ,5.0,0},Section::BRIGHTNESS,{-1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{-60},Section::TURNANGLE,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Lfirst_right[10] = {
            {Section::TWALKER,{60},Section::TURNANGLE,{-60, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, -60, 0, 28, 2.5 ,5.0,0},Section::LENGTH,{55, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, 60, 0, 28, 2.5 ,5.0,0},Section::BRIGHTNESS,{-1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{-60},Section::TURNANGLE,{-180, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Rfirst_left[10] = {
            {Section::TWALKER,{-60},Section::TURNANGLE,{60, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 70, 0, 28, 2.5 ,5.0,0},Section::LENGTH,{55, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 70, 0, 28, 2.5 ,5.0,0},Section::BRIGHTNESS,{-1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{-60},Section::TURNANGLE,{180, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{210,0.1, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Rfirst_right[10] = {
            {Section::TWALKER,{-60},Section::TURNANGLE,{60, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 70, 0, 28, 2.5 ,5.0,0},Section::LENGTH,{55, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 70, 0, 28, 2.5 ,5.0,0},Section::BRIGHTNESS,{-1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{60},Section::TURNANGLE,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{210,0.1, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Go_red_sircle_leftedge[10] = {
            {Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::LENGTH,{12, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{350,0.2, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Go_red_sircle_rightedge[10] = {
            {Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::LENGTH,{12, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{350,0.2, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Go_blue_sircle_leftedge[10] = {
            {Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::LENGTH,{12, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{220,0.2, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{1000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Go_blue_sircle_rightedge[10] = {
            {Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::LENGTH,{12, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::COLOR,{30,0.2, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{220,0.2, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{1000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Go_yellow_sircle_leftedge[10] = {
            {Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::LENGTH,{12, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::COLOR,{350,0.2, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE' },Section::COLOR,{40,0.2, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{1000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Go_yellow_sircle_rightedge[10] = {
            {Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::LENGTH,{12, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::COLOR,{350,0.2, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE },Section::COLOR,{40,0.2, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{1000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Go_green_sircle_leftedge[10] = {
            {Section::VIRSLINE,{45, 10, 0, 70, 10 ,20,1},Section::LENGTH,{12, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{140,0.2, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Go_green_sircle_rightedge[10] = {
            {Section::VIRSLINE,{45, 10, 0, 70, 10 ,20,1},Section::LENGTH,{12, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{140,0.2, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam leftturn_from_leftedge[10] = {
            {Section::VIRCLINE,{30, 5,70, 10 ,20},Section::TURNANGLE,{90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam leftturn_from_rightedge[10] = {
            {Section::VIRCLINE,{30, 5,70, 10 ,20},Section::TURNANGLE,{90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam rightturn_from_leftedge[10] = {
            {Section::VIRCLINE,{30, -5,70, 10 ,20},Section::TURNANGLE,{-90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam rightturn_from_rightedge[10] = {
            {Section::VIRCLINE,{30, -5,70, 10 ,20},Section::TURNANGLE,{-90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam LLast1[20] = {
            {Section::VIRCLINE,{30, 5,70, 10 ,20},Section::TURNANGLE,{90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 10, 0, 28, 2.5 ,5.0,0},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRCLINE,{30, 5,70, 10 ,20},Section::TURNANGLE,{90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,0},Section::LENGTH,{50, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::BRIGHTNESS,{-1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRCLINE,{30, -5,70, 10 ,20},Section::TURNANGLE,{-90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{35, 0.05, 70, 10, 20 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 50, 3, 10 ,0 , 0, _EDGE},Section::COLOR,{210,0.1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam LLast2[20] = {
            {Section::VIRCLINE,{30, 5,70, 10 ,20},Section::TURNANGLE,{90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 10, 0, 28, 2.5 ,5.0,0},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRCLINE,{30, 5,70, 10 ,20},Section::TURNANGLE,{90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,0},Section::LENGTH,{50, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::BRIGHTNESS,{-1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRCLINE,{30, -5,70, 10 ,20},Section::TURNANGLE,{-90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{35, 0.05, 70, 10, 20 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 50, 3, 10 ,0 , 0, _EDGE},Section::COLOR,{210,0.1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam LLast3[20] = {
            {Section::VIRCLINE,{30, 5,70, 10 ,20},Section::TURNANGLE,{90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 10, 0, 28, 2.5 ,5.0,0},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRCLINE,{30, 5,70, 10 ,20},Section::TURNANGLE,{90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,0},Section::LENGTH,{50, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::BRIGHTNESS,{-1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRCLINE,{30, -5,70, 10 ,20},Section::TURNANGLE,{-90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{35, 0.05, 70, 10, 20 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 50, 3, 10 ,0 , 0, _EDGE},Section::COLOR,{210,0.1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam LLast4[20] = {
            {Section::VIRCLINE,{30, 5,70, 10 ,20},Section::TURNANGLE,{90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 10, 0, 28, 2.5 ,5.0,0},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRCLINE,{30, 5,70, 10 ,20},Section::TURNANGLE,{90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,0},Section::LENGTH,{50, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::BRIGHTNESS,{-1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRCLINE,{30, -5,70, 10 ,20},Section::TURNANGLE,{-90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{35, 0.05, 70, 10, 20 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 50, 3, 10 ,0 , 0, _EDGE},Section::COLOR,{210,0.1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam RLast1[20] = {
            {Section::VIRCLINE,{30, 5,70, 10 ,20},Section::TURNANGLE,{90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 10, 0, 28, 2.5 ,5.0,0},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRCLINE,{30, 5,70, 10 ,20},Section::TURNANGLE,{90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,0},Section::LENGTH,{50, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::BRIGHTNESS,{-1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRCLINE,{30, -5,70, 10 ,20},Section::TURNANGLE,{-90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{35, 0.05, 70, 10, 20 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 50, 3, 10 ,0 , 0, _EDGE},Section::COLOR,{210,0.1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam RLast2[20] = {
            {Section::VIRCLINE,{30, -5,70, 10 ,20},Section::TURNANGLE,{-90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 10, 0, 28, 2.5 ,5.0,0},Section::LENGTH,{50, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::BRIGHTNESS,{-1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRCLINE,{30, -5,70, 10 ,20},Section::TURNANGLE,{-90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{35, 0.05, 70, 10, 20 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 50, 3, 10 ,0 , 0, _EDGE},Section::COLOR,{210,0.1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam RLast3[20] = {
            {Section::VIRCLINE,{30, -5,70, 10 ,20},Section::TURNANGLE,{-90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{30, 0, 0, 28, 2.5 ,5.0,1},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRCLINE,{30, -5,70, 10 ,20},Section::TURNANGLE,{-90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{30, 0, 0, 28, 2.5 ,5.0,1},Section::LENGTH,{80, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRCLINE,{30, -5,70, 10 ,20},Section::TURNANGLE,{-90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{35, 0.05, 70, 10, 20 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 50, 3, 10 ,0 , 0, _EDGE},Section::COLOR,{210,0.1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam RLast4[20] = {
            {Section::VIRCLINE,{30, -5,70, 10 ,20},Section::TURNANGLE,{-90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 10, 0, 28, 2.5 ,5.0,0},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::BRIGHTNESS,{-1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRCLINE,{30, -5,70, 10 ,20},Section::TURNANGLE,{-90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{35, 0.05, 70, 10, 20 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 50, 3, 10 ,0 , 0, _EDGE},Section::COLOR,{210,0.1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam finish[10] = {
            {Section::TWALKER,{60},Section::TIME,{1000, Section::FLNONE}, Section::EMNONE,{}},


        };

        SecParam Llucky[10] = {
            {Section::TWALKER,{60},Section::TURNANGLE,{-60, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, -60, 0, 28, 2.5 ,5.0,0},Section::LENGTH,{55, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, 60, 0, 28, 2.5 ,5.0,0},Section::BRIGHTNESS,{-1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{-60},Section::TURNANGLE,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Rlucky[10] = {
            {Section::TWALKER,{-60},Section::TURNANGLE,{60, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 70, 0, 28, 2.5 ,5.0,0},Section::LENGTH,{55, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 70, 0, 28, 2.5 ,5.0,0},Section::BRIGHTNESS,{-1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{-60},Section::TURNANGLE,{180, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{210,0.1, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };
};
#endif