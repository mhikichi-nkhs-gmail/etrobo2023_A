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

        SecParam Lcourse[10] = {
            {Section::TRACER,{50, 0.05, 43, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{200, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::TRACER,{80, 0.1 ,  40, 1.5, 0.1 ,0 , 0, _EDGE},Section::LENGTH,{150, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::VIRCLINE,{50, 40 ,  70, 1.5, 0.1 ,0 , 0},Section::TURNANGLE,{50, Section::RESETANG}, Section::EMNONE,{}}, //�����A���a�A�p�x�p�����AP�AI�AD
            //{Section::TRACER,{50, 0 ,  40, 1.5, 0.1 ,0 , 0, _EDGE},Section::LENGTH,{20, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{30,0},Section::LENGTH,{50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRCLINE,{40, -20 , 43, 2.5 ,5.0},Section::LENGTH,{1000, Section::RESETLEN}, Section::EMNONE,{}},
            /*
            {Section::TRACER,{80, 0 ,  40, 1.5, 0.1 ,0 , 0, _EDGE},Section::LENGTH,{50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,90},Section::TURNANGLE,{-700, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,-90},Section::TURNANGLE,{700, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0 ,  30, 0.3, 0.1 ,0 , 0, _EDGE},Section::LENGTH,{300, Section::RESETLEN}, Section::EMNONE,{}},
            */
            //{Section::WALKER,{10,10},Section::TURNANGLE,{30}, Section::EMNONE,{},Section::FLNONE},
        
            {Section::WALKER,{0,0},Section::LENGTH,{0, Section::FLNONE}, Section::EMNONE,{}},
            /*
            {Section::TRACER,{50, 0 ,  30, 0.3, 0.1 ,0 , 0, _EDGE},Section::LENGTH,{100.0}, Section::EMNONE,{},Section::FLNONE},
            {Section::TRACER,{40, 0 ,  30, 0.3, 0.1 ,0 , 0, _EDGE},Section::LENGTH,{1000.0}, Section::EMNONE,{},Section::FLNONE},
            {Section::WALKER,{0,0},Section::LENGTH,{100,0}, Section::EMNONE,{},Section::FLNONE},
            */
       
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};


            //h , s �ԐF 353,0.74 �F�@210,0.83 �΁@137,0.55 ���F�@0~60,0.05
            //����̉E�����̒l

        SecParam Rcourse[10] = {

        {Section::TRACER,{100, 0.05, 43, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{290, Section::FLNONE}, Section::EMNONE,{}},
        {Section::TRACER,{80, 0.1, 43, 2.5, 5.0 ,-28 , 0, _EDGE},Section::TURNANGLE,{78, Section::FLNONE}, Section::EMNONE,{}},
        {Section::TRACER,{80, 0.05, 43, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{167.5, Section::RESETLEN}, Section::EMNONE,{}},
        {Section::TRACER,{80, 0.1, 43, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{205,0.138, Section::RESETLEN}, Section::EMNONE,{}},
        {Section::WALKER,{0,0},Section::LENGTH,{0, Section::FLNONE}, Section::EMNONE,{}},
        {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};


};

#endif
