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
            INIT_BLUE_MARKER,
            BLUE_MARKER,
            INIT_RED_MARKER,
            RED_MARKER,
            INIT_YELLOW_MARKER,
            YELLOW_MARKER,
            INIT_GRREN_MARKER,
            GRREN_MARKER,
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
            {Section::TWALKER,{60},Section::TURNANGLE,{-75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, -75, 0, 28, 2.5 ,5.0,0},Section::LENGTH,{50, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, 75, 0, 28, 2.5 ,5.0,0},Section::BRIGHTNESS,{-1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-60},Section::TURNANGLE,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Rfirst[10] = {
            {Section::TWALKER,{-60},Section::TURNANGLE,{75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, 75, 0, 28, 2.5 ,5.0,0},Section::LENGTH,{50, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, 75, 0, 28, 2.5 ,5.0,0},Section::BRIGHTNESS,{-1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{60},Section::TURNANGLE,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Go_red_sircle[10] = {
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{350,0.2, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Go_blue_sircle[10] = {
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{220,0.2, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{1000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Go_yellow_sircle[10] = {
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{30,0.2, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{1000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Go_green_sircle[10] = {
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{150,0.2, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{1000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

};
#endif