#ifndef _SPEED_SECTION_MANAGER_H_
#define _SPEED_SECTION_MANAGER_H_
#include "SectionManager.h"

class SpeedSectionManager : public SectionManager {
    public:

        SpeedSectionManager();
        bool run();
        void course(int direct);

        /*
        enum Course{
            RCOURSE,
            LCOURSE
        };
        */
        //Course mCourse;


        enum Course {
            LCOURSE,
            RCOURSE
        };

    protected:
#if defined(MAKE_RIGHT)
    const int _EDGE = LineTracer::LEFTEDGE;
#else
    const int _EDGE = LineTracer::RIGHTEDGE;
#endif

    Course mCourse;

        Course mCourse;
#if defined(MAKE_RIGHT)
    const int _EDGE = LineTracer::LEFTEDGE;
#else
    const int _EDGE = LineTracer::RIGHTEDGE;
#endif



    private:
        SecParam Rcourse[10] = {
            //{Section::TRACER,{80, 0 ,  40, 1.5, 0.1 ,0 , 0, _EDGE},Section::LENGTH,{50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,30},Section::TURNANGLE,{-700, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,-30},Section::TURNANGLE,{700, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,30},Section::TURNANGLE,{-700, Section::RESETANG}, Section::EMNONE,{}},
            
            //{Section::TRACER,{50, 0 ,  30, 0.3, 0.1 ,0 , 0, _EDGE},Section::LENGTH,{30, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::TRACER,{70, 0 ,  40, 1.5, 0.1 ,0 , 0, _EDGE},Section::LENGTH,{330, Section::FLNONE}, Section::EMNONE,{}},
            /*{Section::TRACER,{30, 0 ,  40, 1.5, 0.1 ,0 , 0, _EDGE},Section::LENGTH,{50, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0 ,  40, 1.5, 0.1 ,0 , 0, _EDGE},Section::LENGTH,{150, Section::RESETLEN}, Section::EMNONE,{}},
            
            {Section::TRACER,{30, 0 ,  40, 0.3, 0.1 ,0 , 0, _EDGE},Section::LENGTH,{90, Section::RESETLEN}, Section::EMNONE,{}},*/
            {Section::TRACER,{70, 0 ,  40, 0.3, 0.1 ,0 , 0, _EDGE},Section::COLOR,{240}, Section::EMNONE,{}},
            //{Section::TRACER,{30, 0 ,  40, 0.3, 0.1 ,0 , 0, _EDGE},Section::LENGTH,{300, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::TRACER,{40, 0 ,  40, 0.3, 0.1 ,0 , 0, _EDGE},Section::LENGTH,{90, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::TRACER,{50, 0 ,  40, 0.3, 0.1 ,0 , 0, _EDGE},Section::COLOR,{200}, Section::EMNONE,{}},
            //{Section::TRACER,{50, 0 ,  40, 0.3, 0.1 ,0 , 0, LineTracer::LEFTEDGE},Section::LENGTH,{350, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{10,10},Section::TURNANGLE,{30}, Section::EMNONE,{},Section::FLNONE},
        
            {Section::WALKER,{0,0},Section::LENGTH,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};
            //{Section::TWALKER,{-45},Section::TURNANGLE,{9000, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::VIRCLINE,{50, 40 ,  70, 1.5, 0.1 ,0 , 0},Section::TURNANGLE,{50, Section::RESETANG}, Section::EMNONE,{}}, //速さ、半径、P、I、D
           
            //{Section::VIRSLINE,{30, -45, 0, 25, 2.5 ,2.0},Section::LENGTH,{50, Section::RESETLEN}, Section::EMNONE,{}}, //速度、角度,０、P,I,D


            //h , s 赤色 353,0.74 青色　210,0.83 緑　137,0.55 黄色　0~60,0.05
            //旋回の右が負の値

        SecParam Rcourse[10] = {

        {Section::TRACER,{100, 0.05, 43, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{290, Section::FLNONE}, Section::EMNONE,{}},
        {Section::TRACER,{80, 0.1, 43, 2.5, 5.0 ,-28 , 0, _EDGE},Section::TURNANGLE,{78, Section::FLNONE}, Section::EMNONE,{}},
        {Section::TRACER,{80, 0.05, 43, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{167.5, Section::RESETLEN}, Section::EMNONE,{}},
        {Section::TRACER,{80, 0.1, 43, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{205,0.138, Section::RESETLEN}, Section::EMNONE,{}},
        {Section::WALKER,{0,0},Section::LENGTH,{0, Section::FLNONE}, Section::EMNONE,{}},
        {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

};

#endif
