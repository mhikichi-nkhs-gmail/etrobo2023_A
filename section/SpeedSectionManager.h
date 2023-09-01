#ifndef _SPEED_SECTION_MANAGER_H_
#define _SPEED_SECTION_MANAGER_H_
#include "SectionManager.h"

class SpeedSectionManager : public SectionManager {
    public:

        SpeedSectionManager();
        void course(int direct);

        
    protected:
#if defined(MAKE_RIGHT)
    const int _EDGE = LineTracer::LEFTEDGE;
#else
    const int _EDGE = LineTracer::RIGHTEDGE;
#endif

    


    private:
        SecParam Lcourse[10] = {

            {Section::TRACER,{80, 0.05, 43, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{290, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.1, 43, 2.5, 5.0 ,31 , 0, 'LEFTEDGE'},Section::TURNANGLE,{-73, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.05, 43, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{165, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.1, 43, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::TURNANGLE,{-73, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.1, 43, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{208,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Rcourse[20] = {
            //{Section::TWALKER,{-65},Section::TURNANGLE,{90, Section::FLNONE}, Section::EMNONE,{}},/*RESETANG*/
            //{Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::VIRSLINE,{-60, 90, 0, 75, 2.5 ,6.0},Section::LENGTH,{-50, Section::RESETLEN}, Section::EMNONE,{}},/*RESETLEN*/
             //{Section::WALKER,{0,0},Section::TIME,{500, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::TWALKER,{70},Section::TURNANGLE,{0, Section::FLNONE}, Section::EMNONE,{}},/*RESETANG*/
           // {Section::VIRSLINE,{60, 0, 0, 75, 2.5 ,6.0},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},/*RESETLEN*/
            //{Section::VIRSLINE,{-80, 0, 0, 75, 2.5 ,6.0},Section::LENGTH,{-100, Section::RESETLEN}, Section::EMNONE,{}},/*RESETLEN*/
            {Section::TRACER,{80, 0.05, 43, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{290, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.1, 43, 2.5, 5.0 ,-31 , 0, _EDGE},Section::TURNANGLE,{65, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.05, 43, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{165, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.1, 43, 2.5, 5.0 ,-31 , 0, _EDGE},Section::TURNANGLE,{65, Section::RESETANG}, Section::EMNONE,{}},
            //{Section::TRACER,{80, 0.1, 43, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.1, 43, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{208,0.1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{100, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

};

#endif
