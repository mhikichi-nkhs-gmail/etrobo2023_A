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
            INIT_FIRST_LCOURSE,
            FIRST_LCOURSE,

            INIT_FIRST_RCOURSE,
            FIRST_RCOURSE,

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

            INIT_LEFTTURN_LEFTEDGE_RED,
            LEFTTURN_LEFTEDGE_RED,

            INIT_LEFTTURN_RIGHTEDGE_RED,
            LEFTTURN_RIGHTEDGE_RED,

            INIT_LEFTTURN_LEFTEDGE_BLUE,
            LEFTTURN_LEFTEDGE_BLUE,

            INIT_LEFTTURN_RIGHTEDGE_BLUE,
            LEFTTURN_RIGHTEDGE_BLUE,

            INIT_LEFTTURN_LEFTEDGE_YELLOW,
            LEFTTURN_LEFTEDGE_YELLOW,

            INIT_LEFTTURN_RIGHTEDGE_YELLOW,
            LEFTTURN_RIGHTEDGE_YELLOW,

            INIT_LEFTTURN_LEFTEDGE_GREEN,
            LEFTTURN_LEFTEDGE_GREEN,

            INIT_LEFTTURN_RIGHTEDGE_GREEN,
            LEFTTURN_RIGHTEDGE_GREEN,

            INIT_RIGHTTURN_LEFTEDGE_RED,
            RIGHTTURN_LEFTEDGE_RED,

            INIT_RIGHTTURN_RIGHTEDGE_RED,
            RIGHTTURN_RIGHTEDGE_RED,

            INIT_RIGHTTURN_LEFTEDGE_BLUE,
            RIGHTTURN_LEFTEDGE_BLUE,

            INIT_RIGHTTURN_RIGHTEDGE_BLUE,
            RIGHTTURN_RIGHTEDGE_BLUE,

            INIT_RIGHTTURN_LEFTEDGE_YELLOW,
            RIGHTTURN_LEFTEDGE_YELLOW,

            INIT_RIGHTTURN_RIGHTEDGE_YELLOW,
            RIGHTTURN_RIGHTEDGE_YELLOW,

            INIT_RIGHTTURN_LEFTEDGE_GREEN,
            RIGHTTURN_LEFTEDGE_GREEN,

            INIT_RIGHTTURN_RIGHTEDGE_GREEN,
            RIGHTTURN_RIGHTEDGE_GREEN,

            INIT_LAST,
            LAST,

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

        SecParam Lfirst[10] = {
            {Section::TWALKER,{60},Section::TURNANGLE,{-60, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, -60, 0, 28, 2.5 ,5.0,0},Section::LENGTH,{55, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, 60, 0, 28, 2.5 ,5.0,0},Section::BRIGHTNESS,{-0.5, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{-60},Section::TURNANGLE,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Rfirst[10] = {
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
            {Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::COLOR,{210,0.1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{350,0.2, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Go_red_sircle_rightedge[10] = {
            {Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::COLOR,{210,0.1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{350,0.2, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Go_blue_sircle_leftedge[10] = {
            {Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::COLOR,{30,0.2, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{220,0.2, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{1000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Go_blue_sircle_rightedge[10] = {
            {Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::COLOR,{30,0.2, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{220,0.2, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{1000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Go_yellow_sircle_leftedge[10] = {
            {Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::COLOR,{350,0.2, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE' },Section::COLOR,{40,0.2, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{1000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Go_yellow_sircle_rightedge[10] = {
            {Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::COLOR,{350,0.2, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE },Section::COLOR,{40,0.2, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{1000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Go_green_sircle_leftedge[10] = {
            {Section::VIRSLINE,{45, 10, 0, 70, 10 ,20,1},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{140,0.2, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Go_green_sircle_rightedge[10] = {
            {Section::VIRSLINE,{45, 10, 0, 70, 10 ,20,1},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{140,0.2, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam leftturn_from_leftedge_for_red[10] = {
            {Section::VIRCLINE,{30, 5,70, 10 ,20},Section::TURNANGLE,{90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{350,0.2, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam leftturn_from_rightedge_for_red[10] = {
            {Section::VIRCLINE,{30, 5,70, 10 ,20},Section::TURNANGLE,{90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{350,0.2, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam rightturn_from_leftedge_for_red[10] = {
            {Section::VIRCLINE,{30, -5,70, 10 ,20},Section::TURNANGLE,{-90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{350,0.2, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam rightturn_from_rightedge_for_red[10] = {
            {Section::VIRCLINE,{30, -5,70, 10 ,20},Section::TURNANGLE,{-90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{350,0.2, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam leftturn_from_leftedge_for_blue[10] = {
            {Section::VIRCLINE,{30, 5,70, 10 ,20},Section::TURNANGLE,{90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{210,0.2, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam leftturn_from_rightedge_for_blue[10] = {
            {Section::VIRCLINE,{30, 5,70, 10 ,20},Section::TURNANGLE,{90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{210,0.2, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam rightturn_from_leftedge_for_blue[10] = {
            {Section::VIRCLINE,{30, -5,70, 10 ,20},Section::TURNANGLE,{-90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{210,0.2, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam rightturn_from_rightedge_for_blue[10] = {
            {Section::VIRCLINE,{30, -5,70, 10 ,20},Section::TURNANGLE,{-90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{210,0.2, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam leftturn_from_leftedge_for_yellow[10] = {
            {Section::VIRCLINE,{30, 5,70, 10 ,20},Section::TURNANGLE,{90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{40,0.2, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam leftturn_from_rightedge_for_yellow[10] = {
            {Section::VIRCLINE,{30, 5,70, 10 ,20},Section::TURNANGLE,{90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{40,0.2, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam rightturn_from_leftedge_for_yellow[10] = {
            {Section::VIRCLINE,{30, -5,70, 10 ,20},Section::TURNANGLE,{-90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{40,0.2, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam rightturn_from_rightedge_for_yellow[10] = {
            {Section::VIRCLINE,{30, -5,70, 10 ,20},Section::TURNANGLE,{-90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{40,0.2, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam leftturn_from_leftedge_for_green[10] = {
            {Section::VIRCLINE,{30, 5,70, 10 ,20},Section::TURNANGLE,{90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{140,0.2, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam leftturn_from_rightedge_for_green[10] = {
            {Section::VIRCLINE,{30, 5,70, 10 ,20},Section::TURNANGLE,{90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{140,0.2, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam rightturn_from_leftedge_for_green[10] = {
            {Section::VIRCLINE,{30, -5,70, 10 ,20},Section::TURNANGLE,{-90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{140,0.2, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam rightturn_from_rightedge_for_green[10] = {
            {Section::VIRCLINE,{30, -5,70, 10 ,20},Section::TURNANGLE,{-90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{40, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{140,0.2, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Last[10] = {
            {Section::VIRSLINE,{45, 10, 0, 28, 2.5 ,5.0,0},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{45, 0, 0, 28, 2.5 ,5.0,1},Section::BRIGHTNESS,{-1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRCLINE,{30, -5,70, 10 ,20},Section::TURNANGLE,{-90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{35, 0.05, 70, 10, 20 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 50, 3, 10 ,0 , 0, _EDGE},Section::COLOR,{210,0.1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}

        };
};
#endif