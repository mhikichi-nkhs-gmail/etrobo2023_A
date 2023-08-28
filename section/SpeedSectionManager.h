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
            {Section::TRACER,{70, 0.05, 43, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{290, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.1, 43, 2.5, 5.0 ,28 , 0, _EDGE},Section::TURNANGLE,{-78, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.05, 43, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{167.5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.1, 43, 2.5, 5.0 ,28 , 0, _EDGE},Section::TURNANGLE,{-78, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.05, 43, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{30, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.1, 43, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{208,0.3, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{500, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};
            

        SecParam Rcourse[10] = {

            {Section::TRACER,{70, 0.05, 43, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{290, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.1, 43, 2.5, 5.0 ,-28 , 0, _EDGE},Section::TURNANGLE,{78, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.05, 43, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{167.5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.1, 43, 2.5, 5.0 ,-28 , 0, _EDGE},Section::TURNANGLE,{78, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.05, 43, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{30, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.1, 43, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{208,0.3, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

            //192 0.24 196 0.26 0199 201 0.23 202 203 204 0.21 207 208 0.38 209 0.47 210
};

#endif
