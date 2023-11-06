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
        int cm = 3;
        double db = 0.0;
        double vp = 100;
        double vi = 27;
        double vd = 5.0;

        double tw = 63;
        double tp = 10;
        double ti = 20;
        double td = 2.5;
        //JudgeReception * mJr;

        SecParam Lcourse[21] = {
            {Section::VIRSLINE,{50, -10, 0, 28, 2.5 ,5.0,1},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{100000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.05, 10, 27, 4.5 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{75, 0.05, 10, 27, 4.5 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{130, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 43, 4.5, 6.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{210,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::VIRSLINE,{55, -10, 0, 28, 2.5 ,5.0,1},Section::LENGTH,{15, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{-tw,tp,ti,td},Section::TURNANGLE,{85, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-50, 95, 0, vp, vi ,vd,0},Section::LENGTH,{-14, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{0,1},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{3,0},Section::RECEPTION,{0,50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, 100, 0, vp, vi ,vd,0},Section::LENGTH,{-0.5, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{tw,tp,ti,td},Section::TURNANGLE,{15, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Lnextpoint[20] = {
            {Section::TRACER,{45, db, 13, 27.5, 7.0 ,0 , 0, _EDGE},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, db, 13, 27.5, 5.5 ,0 , 0, _EDGE},Section::LENGTH,{5+49, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, db, 13, 27.5, 5.5 ,0 , 0, _EDGE},Section::LENGTH,{5+49+15, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{-tw,tp,ti,td},Section::TURNANGLE,{80, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-50, 90, 0, vp, vi ,vd,0},Section::LENGTH,{-14, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{0,0},Section::RECEPTION,{0,10, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{0,1},Section::RECEPTION,{0,10, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{3,0},Section::RECEPTION,{0,50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, 95, 0, vp, vi ,vd,0},Section::LENGTH,{0.5, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{tw,tp,ti,td},Section::TURNANGLE,{12, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Lbluemarker1[10] = { 
            {Section::TRACER,{70, db, 13, 27.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{150, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.1, 13, 27.5, 7.0 ,0 , 0, _EDGE},Section::COLOR,{208,0.08, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Lbluemarker2[10] = { 
            {Section::TRACER,{70, db, 13, 27.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{100, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.1, 13, 27.5, 7.0 ,0 , 0, _EDGE},Section::COLOR,{208,0.08, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Lbluemarker3[10] = { 
            {Section::TRACER,{70, db, 13, 27.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{50, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.1, 13, 27.5, 7.0 ,0 , 0, _EDGE},Section::COLOR,{208,0.08, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Lbluemarker4[10] = { 
            {Section::TRACER,{70, db, 13, 27.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.1, 13, 27.5, 7.0 ,0 , 0, _EDGE},Section::COLOR,{208,0.08, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Rcourse[100] = {
            {Section::VIRSLINE,{50, 13, 0, 12.8, 2.5 ,4.9,1},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, db, 13, 27.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, db, 13, 27.5, 4.5 ,0 , 0, _EDGE},Section::LENGTH,{5+123, Section::FLNONE}, Section::EMNONE,{}},/*RESETLEN*/
            {Section::TRACER,{40, -0.1, 13, 27.5, 6.5 ,0 , 0, _EDGE},Section::COLOR,{210,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{tw,tp,ti,td},Section::TURNANGLE,{-85, Section::RESETANG}, Section::EMNONE,{}},/*RESETANG*/
            //{Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{-45,0},Section::LENGTH,{-14, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-55, -100, 0, vp, vi ,vd,0},Section::LENGTH,{-14, Section::RESETLEN}, Section::EMNONE,{}},/*RESETLEN*/
            //{Section::WALKER,{0,0},Section::TIME,{1000000, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::FILE,{},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{0,1},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{3,0},Section::RECEPTION,{1,50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, -101, 0, vp, vi ,vd,0},Section::LENGTH,{-0.5, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{-tw,tp,ti,td},Section::TURNANGLE,{-15, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Rnextpoint[20] = {
            {Section::TRACER,{45, db, 13, 27.5, 7.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, db, 13, 27.5, 5.5 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{5+49, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{45, db, 13, 27.5, 5.5 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{5+49+15, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{tw,tp,ti,td},Section::TURNANGLE,{-80, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-50, -99, 0, vp, vi ,vd,0},Section::LENGTH,{-13.5, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{0,1},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{3,0},Section::RECEPTION,{1,50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{55, -100, 0, vp, vi ,vd,0},Section::LENGTH,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{-tw,tp,ti,td},Section::TURNANGLE,{-13, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{100000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Rbluemarker1[10] = { 
            {Section::TRACER,{60, db, 13, 27.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{220, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.1, 13, 27.5, 7.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{208,0.08, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Rbluemarker2[10] = { 
            {Section::TRACER,{60, db, 13, 27.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{170, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.1, 13, 27.5, 7.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{208,0.08, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Rbluemarker3[10] = { 
            {Section::TRACER,{60, db, 13, 27.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{120, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.1, 13, 27.5, 7.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{208,0.08, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Rbluemarker4[10] = { 
            {Section::TRACER,{60, db, 13, 27.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{45, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{30000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.1, 13, 27.5, 7.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{210,0.08, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

#if PATARN == 1      
        SecParam SLcourse[40] = { //+10
            {Section::TRACER,{60, -0.6, 15, 28, 7.0 ,0 , 0, _EDGE},Section::LENGTH,{24, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, db, 15, 29, 9.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{24+6, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, db, 15, 28, 7.0 ,0 , 0 ,'LEFTEDGE'},Section::LENGTH,{20+15, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, db, 13, 27.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{20+15+len, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{tw,tp,ti,td},Section::TURNANGLE,{-83, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{0,2},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{0,1},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{3,0},Section::RECEPTION,{0,50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, -75, 0, 25, 2.5 ,2.0,0},Section::LENGTH,{1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-tw,tp,ti,td},Section::TURNANGLE,{-9, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, db, 13, 27.5, 8.0 ,0 , 0 ,'LEFTEDGE'},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{70, db, 15, 28, 7.0 ,0 , 0 ,'LEFTEDGE'},Section::LENGTH,{80-len, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.1, 15, 28, 7.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{210,0.08, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{60, -0.1, 15, 28, 7.0 ,0 , 0, 'LEFDTEDGE'},Section::LENGTH,{19, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, db, 15, 29, 9.0 ,0 , 0, _EDGE},Section::LENGTH,{6, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, db, 15, 28, 7.0 ,0 , 0 ,_EDGE},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, db, 15, 28, 7.0 ,0 , 0 ,_EDGE},Section::LENGTH,{20+135, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{-60,tp,ti,td},Section::TURNANGLE,{85, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, 85, 0, 28, 2.5 ,1.2,0},Section::LENGTH,{40, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{55, 85, 0, 28, 2.5 ,1.2,0},Section::BRIGHTNESS,{-0.25, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, 85, 0, 28, 2.5 ,1.2,0},Section::LENGTH,{cm+2, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{60,tp,ti,td},Section::TURNANGLE,{5, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 45, 4.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{65, 0, 0, 25, 2.5 ,2.0,1},Section::LENGTH,{17, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::TRACER,{60, 0.05, 48, 4.5, 8.5 ,0 , 0, _EDGE},Section::LENGTH,{3, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::TRACER,{60, 0.05, 48, 4.5, 6.5 ,0 , 0, _EDGE},Section::LENGTH,{107, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::VIRSLINE,{50, -5, 0,0, 28, 2.5 ,1.2,1},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::TRACER,{50, 0.05, 48, 2.5, 8.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::TRACER,{60, 0.05, 48, 2.5, 5.5 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{27, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::TRACER,{60, 0.05, 43, 2.5, 4.7 ,28 , 0, 'LEFTEDGE'},Section::TURNANGLE,{-58, Section::RESETANG}, Section::EMNONE,{}},
            //{Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{32, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{80, -0.1, db, 27, 5.5 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{70, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.1, db, 27, 5.5 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{354,0.08, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
            };

        SecParam SRcourse[40] = { //+10
            {Section::TRACER,{60, -0.6, 15, 28, 7.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{22, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, db, 15, 28, 7.0 ,0 , 0 ,_EDGE},Section::LENGTH,{20+15, Section::FLNONE}, Section::EMNONE,{}},//'d'noataigayowaikamo
            //{Section::TRACER,{50, -0.1, 14, 27.5, 7.0 ,0 , 0, _EDGE},Section::LENGTH,{20+15+5, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, db, 13, 27.5, 6.5 ,0 , 0, _EDGE},Section::LENGTH,{20+15+len+20, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{-tw,tp,ti,td},Section::TURNANGLE,{85, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{0,2},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{0,1},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{3,0},Section::RECEPTION,{1,50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, 75, 0, 25, 2.5 ,2.0,0},Section::LENGTH,{1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{tw,tp,ti,td},Section::TURNANGLE,{15, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, db, 13, 27.5, 8.0 ,0 , 0 ,_EDGE},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, db, 13, 27.5, 5.0 ,0 , 0 ,_EDGE},Section::LENGTH,{80-len, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.1, 13, 27.5, 7.0 ,0 , 0, _EDGE},Section::COLOR,{210,0.08, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{45, -0.1, 15, 27.5, 7.0 ,0 , 0, _EDGE},Section::LENGTH,{19, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{45, -0.5, 18, 30, 8.0 ,0 , 0, _EDGE},Section::LENGTH,{6, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, db, 15, 28, 8.0 ,0 , 0 ,'LEFTEDGE'},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{70, db, 13, 27.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{20+115, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, db, 15, 28, 8.0 ,0 , 0 ,'LEFTEDGE'},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{60,tp,ti,td},Section::TURNANGLE,{-85, Section::RESETANG}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, -85, 0, 28, 2.5 ,1.2,0},Section::LENGTH,{40, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{55, -85, 0, 28, 2.5 ,1.2,0},Section::BRIGHTNESS,{-0.25, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, -85, 0, 28, 2.5 ,1.2,0},Section::LENGTH,{cm+2, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-60,tp,ti,td},Section::TURNANGLE,{-5, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::TRACER,{60, 0.05, 10, 27, 4.7 ,-28 , 0, _EDGE},Section::TURNANGLE,{58, Section::RESETANG}, Section::EMNONE,{}},
            //{Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{32, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{70, db, 9.9, 27, 8.0 ,0 , 0 ,_EDGE},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{75, db, 9.9, 27, 5.5 ,0 , 0, _EDGE},Section::LENGTH,{5+75, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.1, 13, 27.5, 6.0 ,0 , 0, _EDGE},Section::COLOR,{354,0.1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
            };
            #endif

#if PATARN == 2      
        SecParam SLcourse[30] = { //+40
            {Section::TRACER,{50, -0.6, 48, 4.5, 7.0 ,0 , 0, _EDGE},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.5, 48, 4.5, 7.0 ,0 , 0 ,'LEFTEDGE'},Section::LENGTH,{15, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 45, 4.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{len, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-tw,tp,ti,td},Section::TURNANGLE,{-75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::FILE,{0,0},Section::RECEPTION,{0,50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, -85, 0, 25, 2.5 ,2.0,0},Section::LENGTH,{1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{tw,tp,ti,td},Section::TURNANGLE,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 4.5, 8.0 ,0 , 0 ,_EDGE},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.5, 48, 4.5, 7.0 ,0 , 0 ,_EDGE},Section::LENGTH,{133-len, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 45, 4.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{210,0.08, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 50, 4.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{25, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{65, 0, 0, 25, 2.5 ,2.0,1},Section::LENGTH,{17, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 4.5, 6.5 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{108, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{60, 14, 0,0, 28, 2.5 ,1.2,1},Section::LENGTH,{14, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 2.5, 5.5 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 5.5 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{27, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 43, 4.5, 4.7 ,28 , 0, 'LEFTEDGE'},Section::TURNANGLE,{-58, Section::RESETANG}, Section::EMNONE,{}},
            //{Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{32, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, -0.1, 43, 2.5, 4.7 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{165, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.1, 43, 2.5, 4.7 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{354,0.1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
            };

        SecParam SRcourse[30] = { //+40
            {Section::TRACER,{50, -0.6, 48, 4.5, 7.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.5, 48, 4.5, 7.0 ,0 , 0 ,_EDGE},Section::LENGTH,{15, Section::RESETLEN}, Section::EMNONE,{}},//'d'noataigayowaikamo
            {Section::TRACER,{50, 0.05, 45, 4.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{len, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-tw,tp,ti,td},Section::TURNANGLE,{75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::FILE,{0,0},Section::RECEPTION,{0,50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, -85, 0, 25, 2.5 ,2.0,0},Section::LENGTH,{1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{tw,tp,ti,td},Section::TURNANGLE,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{45, 0.05, 48, 4.5, 8.0 ,0 , 0 ,_EDGE},Section::LENGTH,{5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 4.5, 7.0 ,0 , 0 ,_EDGE},Section::LENGTH,{144-len, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 45, 4.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{210,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 45, 4.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{25, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::TRACER,{60, 0.05, 45, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{169-len, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{65, 0, 0, 25, 2.5 ,2.0,1},Section::LENGTH,{17, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 4.5, 6.5 ,0 , 0, _EDGE},Section::LENGTH,{108, Section::RESETLEN}, Section::EMNONE,{}},
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
            {Section::TWALKER,{-tw,tp,ti,td},Section::TURNANGLE,{-75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::FILE,{0,0},Section::RECEPTION,{0,50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, -85, 0, 25, 2.5 ,2.0,0},Section::LENGTH,{1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{tw,tp,ti,td},Section::TURNANGLE,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 4.5, 7.0 ,0 , 0 ,_EDGE},Section::LENGTH,{93-len, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 45, 4.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{210,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 50, 4.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{25, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{65, 0, 0, 25, 2.5 ,2.0,1},Section::LENGTH,{17, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 4.5, 6.5 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{108, Section::RESETLEN}, Section::EMNONE,{}},
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
            {Section::TRACER,{50, -0.6, 48, 4.5, 7.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.5, 48, 4.5, 7.0 ,0 , 0 ,_EDGE},Section::LENGTH,{15, Section::RESETLEN}, Section::EMNONE,{}},//'d'noataigayowaikamo
            {Section::TRACER,{50, 0.05, 45, 4.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{len+40, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-tw,tp,ti,td},Section::TURNANGLE,{75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::FILE,{0,0},Section::RECEPTION,{0,50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, -85, 0, 25, 2.5 ,2.0,0},Section::LENGTH,{1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{tw,tp,ti,td},Section::TURNANGLE,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 4.5, 7.0 ,0 , 0 ,_EDGE},Section::LENGTH,{83-len, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 45, 4.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{210,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 45, 4.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{25, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::TRACER,{60, 0.05, 45, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{169-len, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{65, 0, 0, 25, 2.5 ,2.0,1},Section::LENGTH,{17, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 4.5, 6.5 ,0 , 0, _EDGE},Section::LENGTH,{108, Section::RESETLEN}, Section::EMNONE,{}},
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
            {Section::TRACER,{50, -0.6, 48, 4.5, 7.0 ,0 , 0, _EDGE},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, -0.5, 48, 4.5, 7.0 ,0 , 0 ,'LEFTEDGE'},Section::LENGTH,{15, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 45, 4.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{len+80, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-tw,tp,ti,td},Section::TURNANGLE,{-75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::FILE,{0,0},Section::RECEPTION,{0,50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, -85, 0, 25, 2.5 ,2.0,0},Section::LENGTH,{1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{tw,tp,ti,td},Section::TURNANGLE,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 4.5, 7.0 ,0 , 0 ,_EDGE},Section::LENGTH,{53-len, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 45, 4.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{210,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 50, 4.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{25, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{65, 0, 0, 25, 2.5 ,2.0,1},Section::LENGTH,{17, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 4.5, 6.5 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{108, Section::RESETLEN}, Section::EMNONE,{}},
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
            {Section::TWALKER,{-60,tp,ti,td},Section::TURNANGLE,{75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::FILE,{0,0},Section::RECEPTION,{0,50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{50, -85, 0, 25, 2.5 ,2.0,0},Section::LENGTH,{1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{60,tp,ti,td},Section::TURNANGLE,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 48, 4.5, 7.0 ,0 , 0 ,_EDGE},Section::LENGTH,{53-len, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 45, 4.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{210,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0.05, 45, 4.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{25, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::TRACER,{60, 0.05, 45, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{169-len, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{65, 0, 0, 25, 2.5 ,2.0,1},Section::LENGTH,{17, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 4.5, 6.5 ,0 , 0, _EDGE},Section::LENGTH,{108, Section::RESETLEN}, Section::EMNONE,{}},
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