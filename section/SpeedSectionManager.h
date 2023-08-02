#ifndef _SPEED_SECTION_MANAGER_H_
#define _SPEED_SECTION_MANAGER_H_
#include "SectionManager.h"

class SpeedSectionManager : public SectionManager {
    public:

        enum Course{
            RCOURSE,
            LCOURSE
        };

        SpeedSectionManager();
        bool run();

    protected:
#if defined(MAKE_RIGHT)
    const int _EDGE = LineTracer::LEFTEDGE;
#else
    const int _EDGE = LineTracer::RIGHTEDGE;
#endif

    Course mCourse;


    private:

        SecParam Lcourse[10] = {
            //{Section::TRACER,{80, 0 ,  40, 1.5, 0.1 ,0 , 0, _EDGE},Section::LENGTH,{50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,90},Section::TURNANGLE,{-700, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,-90},Section::TURNANGLE,{700, Section::RESETANG}, Section::EMNONE,{}},
            //{Section::TRACER,{50, 0 ,  30, 0.3, 0.1 ,0 , 0, _EDGE},Section::LENGTH,{300, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{10,10},Section::TURNANGLE,{30}, Section::EMNONE,{},Section::FLNONE},
        
            {Section::WALKER,{0,0},Section::LENGTH,{0, Section::FLNONE}, Section::EMNONE,{}},
            /*
            {Section::TRACER,{50, 0 ,  30, 0.3, 0.1 ,0 , 0, _EDGE},Section::LENGTH,{100.0}, Section::EMNONE,{},Section::FLNONE},
            {Section::TRACER,{40, 0 ,  30, 0.3, 0.1 ,0 , 0, _EDGE},Section::LENGTH,{1000.0}, Section::EMNONE,{},Section::FLNONE},
            {Section::WALKER,{0,0},Section::LENGTH,{100,0}, Section::EMNONE,{},Section::FLNONE},
            */
       
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};


            //h , s 赤色 353,0.74 青色　210,0.83 緑　137,0.55 黄色　0~60,0.05
            //旋回の右が負の値

        SecParam Rcourse[10] = {

        {Section::WALKER,{0,30},Section::TURNANGLE,{-700, Section::RESETANG}, Section::EMNONE,{}},
        {Section::WALKER,{0,-30},Section::TURNANGLE,{700, Section::RESETANG}, Section::EMNONE,{}},
        {Section::TRACER,{50, 0 ,  30, 0.3, 0.1 ,0 , 0, _EDGE},Section::LENGTH,{300, Section::RESETLEN}, Section::EMNONE,{}},
        {Section::WALKER,{0,0},Section::LENGTH,{0, Section::FLNONE}, Section::EMNONE,{}},
        {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};


};

#endif
