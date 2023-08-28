#ifndef _DOUBLE_SECTION_H_
#define _DOUBLE_SECTION_H_
#include "SectionManager.h"

class DoubleSection : public SectionManager  
{  
    public:

        DoubleSection();
        bool run();
        void course(int direct);
        void lbluemarker();
        void lnextpoint();
        void lfinishe1();
        void lfinishe2();
        void lfinishe3();
        void lfinishe4();
        void scircle(int direct);

        enum COURSNO{
            SET_LBLUE_MARKER,
            LBLUE_MARKER,
            SET_LNEXT_POINT,
            LNEXT_POINT,
            SET_LFINISHE1,
            LFINISHE1,
            SET_LFINISHE2,
            LFINISHE2,
            SET_LFINISHE3,
            LFINISHE3,
            SET_LFINISHE4,
            LFINISHE4,
            END


        };

    protected:
        COURSNO NO;

#if defined(MAKE_RIGHT)
    const int _EDGE = LineTracer::LEFTEDGE;
#else
    const int _EDGE = LineTracer::RIGHTEDGE;
#endif


    private:

        int len = 136;

        SecParam Lcourse[15] = {
            {Section::VIRSLINE,{55, -25, 0, 28, 2.5 ,1.2},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{30, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{130, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{30, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{208,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{-60},Section::TURNANGLE,{75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-55, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{-15, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{55, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{15, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{60},Section::TURNANGLE,{-75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Lnextpoint[15] = {
            {Section::TRACER,{30, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{63, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-60},Section::TURNANGLE,{75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-75, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{-13.5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{75, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{15, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{60},Section::TURNANGLE,{-73.8, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Lbluemarker1[10] = { 
            {Section::TRACER,{80, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{200, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{208,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Lbluemarker2[10] = { 
            {Section::TRACER,{80, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{150, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{208,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Lbluemarker3[10] = { 
            {Section::TRACER,{80, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{100, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{208,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Lbluemarker4[10] = { 
            {Section::TRACER,{80, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{50, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{208,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Rcourse[100] = {
            //{Section::VIRSLINE,{55, 16, 0, 28, 2.5 ,1.2},Section::LENGTH,{17, Section::RESETLEN}, Section::EMNONE,{}},/*RESETLEN*/
            {Section::VIRSLINE,{55, 16, 0, 28, 2.5 ,1.2},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{115, Section::RESETLEN}, Section::EMNONE,{}},/*RESETLEN*/
            //{Section::TRACER,{60, 0.05, 48, 2.5, 7.5 ,0 , 0, _EDGE},Section::COLOR,{208,0.3, Section::RESETLEN}, Section::EMNONE,{}},/*RESETLEN*/
            {Section::TRACER,{60, 0.05, 48, 2.5, 7.5 ,0 , 0, _EDGE},Section::COLOR,{210,0.3, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{57.5},Section::TURNANGLE,{-90, Section::RESETANG}, Section::EMNONE,{}},/*RESETANG*/
            //{Section::WALKER,{0,57.5},Section::TURNANGLE,{-90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{-55,0},Section::LENGTH,{-10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-55, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{-10, Section::RESETLEN}, Section::EMNONE,{}},/*RESETLEN*/
            //{Section::FILE,{},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{75, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{9.5, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{3000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{-60},Section::TURNANGLE,{87.9, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{63, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{65},Section::TURNANGLE,{-77, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::FILE,{},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-55, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{-10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{55, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{11, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-65},Section::TURNANGLE,{75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{63, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{65},Section::TURNANGLE,{-83, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-55, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{-10, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{55, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{11, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-75},Section::TURNANGLE,{81, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 50, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{64, Section::RESETLEN}, Section::EMNONE,{}},
           {Section::TWALKER,{65},Section::TURNANGLE,{-80, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-55, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{-10, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{55, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{10.5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-65},Section::TURNANGLE,{78, Section::RESETANG}, Section::EMNONE,{}},
            //{Section::TRACER,{60, -0.4, 48, 2.5, 4.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{262, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, -0.4, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{210,0.3, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::TRACER,{70, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{63, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam SLcourse[10] = {
            {Section::TRACER,{80, 0.05, 50, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{256-len, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-75},Section::TURNANGLE,{89, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-75, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{-13.5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{75, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{14, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{75},Section::TURNANGLE,{-87, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.05, 50, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{len, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam SRcourse[20] = {
            {Section::TRACER,{60, -0.4, 40, 2.5, 5.0 ,0 , 0 ,_EDGE},Section::LENGTH,{35, Section::RESETLEN}, Section::EMNONE,{}},//'d'noataigayowaikamo
            {Section::TRACER,{60, 0.05, 50, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{len, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-65},Section::TURNANGLE,{78, Section::RESETANG}, Section::EMNONE,{}},
        //    {Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{65},Section::TURNANGLE,{-83, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 50, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{171-len, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{65, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{19, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{108, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{60, 16, 0, 28, 2.5 ,1.2},Section::LENGTH,{20.5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{32, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.05, 43, 2.5, 4.7 ,-28 , 0, _EDGE},Section::TURNANGLE,{78, Section::RESETANG}, Section::EMNONE,{}},
            //{Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{32, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{70, -0.5, 43, 2.5, 4.7 ,0 , 0, _EDGE},Section::COLOR,{354,0.86, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

};
#endif