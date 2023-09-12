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
        //    {Section::FILE,{1,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.1, 40, 4.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{290, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.1, 40, 2.5, 6.5 ,32 , 0, 'LEFTEDGE'},Section::TURNANGLE,{-57, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.1, 40, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{165, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.1, 40, 2.5, 6.5 ,31 , 0, 'LEFTEDGE'},Section::TURNANGLE,{-45, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.1, 40, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{40, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 43, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{208,0.1, Section::RESETLEN}, Section::EMNONE,{}},
        //    {Section::FILE,{3,0},Section::RECEPTION,{0,100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Rcourse[20] = {
            /*{Section::FILE,{0,0},Section::TIME,{1000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{0,1},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{500, Section::FLNONE}, Section::EMNONE,{}},
            {Section::FILE,{3,0},Section::RECEPTION,{0,300, Section::FLNONE}, Section::EMNONE,{}},*/
        //    {Section::FILE,{1,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{500, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::FILE,{3,0},Section::RECEPTION,{0,3000, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{100000000, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::FILE,{2,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.1, 40, 4.5, 4.1 , 0, _EDGE},Section::LENGTH,{290, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.1, 40, 2.5, 6.5 ,-32 , 0, _EDGE},Section::TURNANGLE,{57, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.1, 40, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{165, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.1, 40, 2.5, 6.5 ,-31 , 0, _EDGE},Section::TURNANGLE,{45, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.1, 40, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{40, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 43, 2.5, 5.0 ,0 , 0, _EDGE},Section::COLOR,{208,0.1, Section::RESETLEN}, Section::EMNONE,{}},
        //    {Section::FILE,{3,0},Section::RECEPTION,{0,100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

};

#endif
