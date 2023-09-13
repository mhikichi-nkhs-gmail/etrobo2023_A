#ifndef _DOUBLE_SECTION_H_
#define _DOUBLE_SECTION_H_
#include "SectionManager.h"
#include "JudgeReception.h"
#include "HackEv3.h"

class DoubleSection : public SectionManager  
{  
    public:

        DoubleSection();
        bool run();
        bool init();
        void course(int direct);
        void bluemarker(int num2);
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
            SLCOURSE,
            SET_RBLUE_MARKER,
            RBLUE_MARKER,
            SET_RNEXT_POINT,
            RNEXT_POINT,
            SET_RFINISHE1,
            RFINISHE1,
            SET_RFINISHE2,
            RFINISHE2,
            SET_RFINISHE3,
            RFINISHE3,
            SET_RFINISHE4,
            RFINISHE4,
            SRCOURSE,
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
        int num1;
        int len = 80;
        //JudgeReception * mJr;

        SecParam Lcourse[20] = {
            {Section::VIRSLINE,{55, -10, 0, 28, 2.5 ,5.0,1},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 43, 2.5, 8.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 43, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{130, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 43, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{210,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{-58},Section::TURNANGLE,{80, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-50, 90, 0, 50, 2.5 ,7.0,0},Section::LENGTH,{-12, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{0,0},Section::RECEPTION,{0,50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{0,1},Section::RECEPTION,{0,50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{3,0},Section::RECEPTION,{0,100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, 90, 0, 50, 2.5 ,8.0,0},Section::LENGTH,{-2, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{58},Section::TURNANGLE,{0, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Lnextpoint[20] = {
            {Section::TRACER,{50, -0.3, 45, 2.5, 9.0 ,0 , 0, _EDGE},Section::LENGTH,{3, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 8.5 ,0 , 0, _EDGE},Section::LENGTH,{64, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-58},Section::TURNANGLE,{80, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-45, 90, 0, 25, 2.5 ,2.0},Section::LENGTH,{-10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{0,0},Section::RECEPTION,{0,50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{0,1},Section::RECEPTION,{0,50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{3,0},Section::RECEPTION,{0,100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, 90, 0, 25, 2.5 ,2.0},Section::LENGTH,{-1.2, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{58},Section::TURNANGLE,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Lbluemarker1[10] = { 
            {Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{200, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{208,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Lbluemarker2[10] = { 
            {Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{150, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{208,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Lbluemarker3[10] = { 
            {Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{100, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{208,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Lbluemarker4[10] = { 
            {Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{50, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{210,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Rcourse[100] = {
            {Section::VIRSLINE,{50, 17, 0, 28, 2.5 ,5.0,1},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{10000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 43, 2.5, 8.0 ,0 , 0, _EDGE},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 43, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{130, Section::RESETLEN}, Section::EMNONE,{}},/*RESETLEN*/
            //{Section::TRACER,{60, 0.05, 48, 2.5, 7.5 ,0 , 0, _EDGE},Section::COLOR,{208,0.3, Section::RESETLEN}, Section::EMNONE,{}},/*RESETLEN*/
            {Section::TRACER,{50, 0.05, 43, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{210,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{57.5},Section::TURNANGLE,{-80, Section::RESETANG}, Section::EMNONE,{}},/*RESETANG*/
            //{Section::WALKER,{0,57.5},Section::TURNANGLE,{-90, Section::RESETANG}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{-55,0},Section::LENGTH,{-10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-45, -95, 0, 25, 2.5 ,2.0,0},Section::LENGTH,{-12, Section::RESETLEN}, Section::EMNONE,{}},/*RESETLEN*/
            //{Section::FILE,{},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{0,0},Section::RECEPTION,{0,50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{0,1},Section::RECEPTION,{0,50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{3,0},Section::RECEPTION,{0,100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, -95, 0, 75, 2.5 ,2.0,0},Section::LENGTH,{-3, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{3000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{-58},Section::TURNANGLE,{0, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Rnextpoint[15] = {
            {Section::TRACER,{50, -0.3, 45, 2.5, 9.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.3, 45, 2.5, 5.5 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{64, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{58.5},Section::TURNANGLE,{-80, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-45, -90, 0, 25, 2.5 ,2.0,0},Section::LENGTH,{-10, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{0,0},Section::RECEPTION,{0,50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{0,1},Section::RECEPTION,{0,50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{3,0},Section::RECEPTION,{0,100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{55, -90, 0, 75, 2.5 ,2.0,0},Section::LENGTH,{-1.4, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{-62},Section::TURNANGLE,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Rbluemarker1[10] = { 
            {Section::TRACER,{50, -0.5, 48, 2.5, 7.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{200, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.5, 48, 2.5, 7.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{208,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Rbluemarker2[10] = { 
            {Section::TRACER,{50, -0.5, 48, 2.5, 7.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{150, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.5, 48, 2.5, 7.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{208,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Rbluemarker3[10] = { 
            {Section::TRACER,{60, -0.5, 48, 2.5, 7.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{100, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, -0.5, 48, 2.5, 7.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{208,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Rbluemarker4[10] = { 
            {Section::TRACER,{50, -0.5, 48, 2.5, 7.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{50, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{30000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.5, 48, 2.5, 7.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{210,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

#if PATARN == 1      
        SecParam SLcourse[30] = { //+10
            {Section::TRACER,{50, -0.6, 48, 2.5, 7.0 ,0 , 0, _EDGE},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}}, 
            {Section::TRACER,{50, -0.5, 48, 2.5, 7.0 ,0 , 0 ,'LEFTEDGE'},Section::LENGTH,{15, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 45, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{len-30, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{60},Section::TURNANGLE,{-75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::FILE,{0,0},Section::RECEPTION,{0,50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, -75, 0, 25, 2.5 ,2.0,0},Section::LENGTH,{1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-60},Section::TURNANGLE,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.5, 48, 2.5, 7.0 ,0 , 0 ,_EDGE},Section::LENGTH,{138-len, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 45, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{210,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 50, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{25, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{65, 0, 0, 25, 2.5 ,2.0,1},Section::LENGTH,{17, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 6.5 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{108, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{60, 14, 0,0, 28, 2.5 ,1.2,1},Section::LENGTH,{4.5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.5 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 5.5 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{27, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 43, 2.5, 4.7 ,28 , 0, 'LEFTEDGE'},Section::TURNANGLE,{-58, Section::RESETANG}, Section::EMNONE,{}},
            //{Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{32, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, -0.1, 43, 2.5, 4.7 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{165, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.1, 43, 2.5, 4.7 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{354,0.1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
            };

        SecParam SRcourse[30] = { //+10
            {Section::TRACER,{50, -0.6, 48, 2.5, 7.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.5, 48, 2.5, 7.0 ,0 , 0 ,_EDGE},Section::LENGTH,{15, Section::RESETLEN}, Section::EMNONE,{}},//'d'noataigayowaikamo
            {Section::TRACER,{50, 0.05, 45, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{len-30, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-57.5},Section::TURNANGLE,{75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::FILE,{0,0},Section::RECEPTION,{0,50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, -85, 0, 25, 2.5 ,2.0,0},Section::LENGTH,{1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{58},Section::TURNANGLE,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.5, 48, 2.5, 7.0 ,0 , 0 ,_EDGE},Section::LENGTH,{174-len, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 45, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{210,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 45, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{25, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::TRACER,{60, 0.05, 45, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{169-len, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{65, 0, 0, 25, 2.5 ,2.0,1},Section::LENGTH,{17, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 6.5 ,0 , 0, _EDGE},Section::LENGTH,{108, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{60, 14, 0,0, 28, 2.5 ,1.2,1},Section::LENGTH,{14, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.5 ,0 , 0, _EDGE},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 5.5 ,0 , 0, _EDGE},Section::LENGTH,{27, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 43, 2.5, 4.7 ,-28 , 0, _EDGE},Section::TURNANGLE,{58, Section::RESETANG}, Section::EMNONE,{}},
            //{Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{32, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, -0.1, 43, 2.5, 4.7 ,0 , 0, _EDGE},Section::LENGTH,{160, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.1, 43, 2.5, 4.7 ,0 , 0, _EDGE},Section::COLOR,{354,0.1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
            };
            #endif

#if PATARN == 2      
        SecParam SLcourse[30] = { //+40
            {Section::TRACER,{50, -0.6, 48, 2.5, 7.0 ,0 , 0, _EDGE},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.5, 48, 2.5, 7.0 ,0 , 0 ,'LEFTEDGE'},Section::LENGTH,{15, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 45, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{len, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-60},Section::TURNANGLE,{-75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::FILE,{0,0},Section::RECEPTION,{0,50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, -85, 0, 25, 2.5 ,2.0,0},Section::LENGTH,{1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{60},Section::TURNANGLE,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 45, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{210,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 50, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{25, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{65, 0, 0, 25, 2.5 ,2.0,1},Section::LENGTH,{17, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 6.5 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{108, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{60, 14, 0,0, 28, 2.5 ,1.2,1},Section::LENGTH,{14, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.5 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 5.5 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{27, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 43, 2.5, 4.7 ,28 , 0, 'LEFTEDGE'},Section::TURNANGLE,{-58, Section::RESETANG}, Section::EMNONE,{}},
            //{Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{32, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, -0.1, 43, 2.5, 4.7 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{165, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.1, 43, 2.5, 4.7 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{354,0.1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
            };

        SecParam SRcourse[30] = { //+40
            {Section::TRACER,{50, -0.6, 48, 2.5, 7.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.5, 48, 2.5, 7.0 ,0 , 0 ,_EDGE},Section::LENGTH,{15, Section::RESETLEN}, Section::EMNONE,{}},//'d'noataigayowaikamo
            {Section::TRACER,{50, 0.05, 45, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{len, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-57.5},Section::TURNANGLE,{75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::FILE,{0,0},Section::RECEPTION,{0,50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, -85, 0, 25, 2.5 ,2.0,0},Section::LENGTH,{1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{58},Section::TURNANGLE,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.5, 48, 2.5, 7.0 ,0 , 0 ,_EDGE},Section::LENGTH,{144-len, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 45, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{210,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 45, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{25, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::TRACER,{60, 0.05, 45, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{169-len, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{65, 0, 0, 25, 2.5 ,2.0,1},Section::LENGTH,{17, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 6.5 ,0 , 0, _EDGE},Section::LENGTH,{108, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{60, 14, 0,0, 28, 2.5 ,1.2,1},Section::LENGTH,{14, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.5 ,0 , 0, _EDGE},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 5.5 ,0 , 0, _EDGE},Section::LENGTH,{27, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 43, 2.5, 4.7 ,-28 , 0, _EDGE},Section::TURNANGLE,{58, Section::RESETANG}, Section::EMNONE,{}},
            //{Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{32, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, -0.1, 43, 2.5, 4.7 ,0 , 0, _EDGE},Section::LENGTH,{165, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.1, 43, 2.5, 4.7 ,0 , 0, _EDGE},Section::COLOR,{354,0.1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
            };
            #endif

#if PATARN == 3      
        SecParam SLcourse[30] = { //+80
            {Section::TRACER,{50, -0.6, 48, 2.5, 7.0 ,0 , 0, _EDGE},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.5, 48, 2.5, 7.0 ,0 , 0 ,'LEFTEDGE'},Section::LENGTH,{15, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 45, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{len+40, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-60},Section::TURNANGLE,{-75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::FILE,{0,0},Section::RECEPTION,{0,50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, -85, 0, 25, 2.5 ,2.0,0},Section::LENGTH,{1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{60},Section::TURNANGLE,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 45, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{210,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 50, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{25, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{65, 0, 0, 25, 2.5 ,2.0,1},Section::LENGTH,{17, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 6.5 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{108, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{60, 14, 0,0, 28, 2.5 ,1.2,1},Section::LENGTH,{14, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.5 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 5.5 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{27, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 43, 2.5, 4.7 ,28 , 0, 'LEFTEDGE'},Section::TURNANGLE,{-58, Section::RESETANG}, Section::EMNONE,{}},
            //{Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{32, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, -0.1, 43, 2.5, 4.7 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{165, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.1, 43, 2.5, 4.7 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{354,0.1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
            };

        SecParam SRcourse[30] = { //+80
            {Section::TRACER,{50, -0.6, 48, 2.5, 7.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.5, 48, 2.5, 7.0 ,0 , 0 ,_EDGE},Section::LENGTH,{15, Section::RESETLEN}, Section::EMNONE,{}},//'d'noataigayowaikamo
            {Section::TRACER,{50, 0.05, 45, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{len+40, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-57.5},Section::TURNANGLE,{75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::FILE,{0,0},Section::RECEPTION,{0,50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, -85, 0, 25, 2.5 ,2.0,0},Section::LENGTH,{1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{58},Section::TURNANGLE,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.5, 48, 2.5, 7.0 ,0 , 0 ,_EDGE},Section::LENGTH,{104-len, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 45, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{210,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 45, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{25, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::TRACER,{60, 0.05, 45, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{169-len, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{65, 0, 0, 25, 2.5 ,2.0,1},Section::LENGTH,{17, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 6.5 ,0 , 0, _EDGE},Section::LENGTH,{108, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{60, 14, 0,0, 28, 2.5 ,1.2,1},Section::LENGTH,{14, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.5 ,0 , 0, _EDGE},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 5.5 ,0 , 0, _EDGE},Section::LENGTH,{27, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 43, 2.5, 4.7 ,-28 , 0, _EDGE},Section::TURNANGLE,{58, Section::RESETANG}, Section::EMNONE,{}},
            //{Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{32, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, -0.1, 43, 2.5, 4.7 ,0 , 0, _EDGE},Section::LENGTH,{165, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.1, 43, 2.5, 4.7 ,0 , 0, _EDGE},Section::COLOR,{354,0.1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
            };
            #endif

#if PATARN == 4      
        SecParam SLcourse[30] = { //+120
            {Section::TRACER,{50, -0.6, 48, 2.5, 7.0 ,0 , 0, _EDGE},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.5, 48, 2.5, 7.0 ,0 , 0 ,'LEFTEDGE'},Section::LENGTH,{15, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 45, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{len+80, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-60},Section::TURNANGLE,{-75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::FILE,{0,0},Section::RECEPTION,{0,50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, -85, 0, 25, 2.5 ,2.0,0},Section::LENGTH,{1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{60},Section::TURNANGLE,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 45, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{210,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 50, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{25, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{65, 0, 0, 25, 2.5 ,2.0,1},Section::LENGTH,{17, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 6.5 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{108, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{60, 14, 0,0, 28, 2.5 ,1.2,1},Section::LENGTH,{14, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.5 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 5.5 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{27, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 43, 2.5, 4.7 ,28 , 0, 'LEFTEDGE'},Section::TURNANGLE,{-58, Section::RESETANG}, Section::EMNONE,{}},
            //{Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{32, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, -0.1, 43, 2.5, 4.7 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{165, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.1, 43, 2.5, 4.7 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{354,0.1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
            };

        SecParam SRcourse[30] = { //+120
            {Section::TRACER,{50, -0.6, 48, 2.5, 7.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.5, 48, 2.5, 7.0 ,0 , 0 ,_EDGE},Section::LENGTH,{15, Section::RESETLEN}, Section::EMNONE,{}},//'d'noataigayowaikamo
            {Section::TRACER,{50, 0.05, 45, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{len+80, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-57.5},Section::TURNANGLE,{75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::FILE,{0,0},Section::RECEPTION,{0,50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, -85, 0, 25, 2.5 ,2.0,0},Section::LENGTH,{1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{58},Section::TURNANGLE,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.5, 48, 2.5, 7.0 ,0 , 0 ,_EDGE},Section::LENGTH,{34-len, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 45, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{210,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 45, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{25, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::TRACER,{60, 0.05, 45, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{169-len, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{65, 0, 0, 25, 2.5 ,2.0,1},Section::LENGTH,{17, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 6.5 ,0 , 0, _EDGE},Section::LENGTH,{108, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{60, 14, 0,0, 28, 2.5 ,1.2,1},Section::LENGTH,{14, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.5 ,0 , 0, _EDGE},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 5.5 ,0 , 0, _EDGE},Section::LENGTH,{27, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 43, 2.5, 4.7 ,-28 , 0, _EDGE},Section::TURNANGLE,{58, Section::RESETANG}, Section::EMNONE,{}},
            //{Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{32, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, -0.1, 43, 2.5, 4.7 ,0 , 0, _EDGE},Section::LENGTH,{165, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.1, 43, 2.5, 4.7 ,0 , 0, _EDGE},Section::COLOR,{354,0.1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
            };
            #endif
};
#endif