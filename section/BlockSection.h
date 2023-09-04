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


        enum BLOCK{
            INIT_FIRST_LCOURSE,
            FIRST_LCOURSE,
            INIT_FIRST_RCOURSE,
            FIRST_RCOURSE,
            END
        };

    protected:


        BLOCK COURSE;

    private:

        SecParam Lfirst[10] = {
            {Section::TWALKER,{60},Section::TURNANGLE,{-75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, -75, 0, 28, 2.5 ,5.0,0},Section::LENGTH,{50, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, 75, 0, 28, 2.5 ,5.0,0},Section::BRIGHTNESS,{-1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Rfirst[10] = {
            {Section::TWALKER,{-60},Section::TURNANGLE,{75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, 75, 0, 28, 2.5 ,5.0,0},Section::LENGTH,{50, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, 75, 0, 28, 2.5 ,5.0,0},Section::BRIGHTNESS,{-1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        /*

        SecParam Go_red_sircle[10] = {
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{350,0.2, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Go_blue_sircle[10] = {
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{220,0.2, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Go_yellow_sircle[10] = {
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{30,0.2, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };

        SecParam Go_green_sircle[10] = {
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{150,0.2, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
        };
        */

};
#endif