#ifndef _SPEED_SECTION_MANAGER_H_
#define _SPEED_SECTION_MANAGER_H_
#include "SectionManager.h"

class SpeedSectionManager : public SectionManager {
    public:

        SpeedSectionManager();
        bool run();
        void course(int direct);

    protected:
#if defined(MAKE_RIGHT)
    const int _EDGE = LineTracer::LEFTEDGE;
#else
    const int _EDGE = LineTracer::RIGHTEDGE;
#endif


    private:

            //{Section::TWALKER,{-45},Section::TURNANGLE,{9000, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::VIRCLINE,{50, 40 ,  70, 1.5, 0.1 ,0 , 0},Section::TURNANGLE,{50, Section::RESETANG}, Section::EMNONE,{}}, //�����A���a�AP�AI�AD
           
            //{Section::VIRSLINE,{30, -45, 0, 25, 2.5 ,2.0},Section::LENGTH,{50, Section::RESETLEN}, Section::EMNONE,{}}, //���x�A�p�x,�O�AP,I,D
        SecParam Lcourse[7] = {
            
            {Section::TRACER,{100, 0.05, 43, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{290, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.1, 43, 2.5, 5.0 ,28 , 0, 'LEFTEDGE'},Section::TURNANGLE,{-78, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.05, 43, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{167.5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.1, 43, 2.5, 5.0 ,28 , 0, 'LEFTEDGE'},Section::TURNANGLE,{-78, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.1, 43, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{205,0.138, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,30},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

            //h , s ?��ԐF 353,0.74 ?��F?��@210,0.83 ?��΁@137,0.55 ?��?��?��F?��@0~60,0.05
            //?��?��?��?��̉E?��?��?��?��?��̒l

        SecParam Rcourse[10] = {

        {Section::TRACER,{100, 0.05, 43, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{290, Section::FLNONE}, Section::EMNONE,{}},
        {Section::TRACER,{80, 0.1, 43, 2.5, 5.0 ,-28 , 0, _EDGE},Section::TURNANGLE,{78, Section::FLNONE}, Section::EMNONE,{}},
        {Section::TRACER,{80, 0.05, 43, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{167.5, Section::RESETLEN}, Section::EMNONE,{}},
        {Section::TRACER,{80, 0.1, 43, 2.5, 5.0 ,-28 , 0, _EDGE},Section::TURNANGLE,{78, Section::FLNONE}, Section::EMNONE,{}},
        {Section::TRACER,{80, 0.1, 43, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{205,0.138, Section::RESETLEN}, Section::EMNONE,{}},
        {Section::WALKER,{0,0},Section::LENGTH,{0, Section::FLNONE}, Section::EMNONE,{}},
        {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};


};

#endif
