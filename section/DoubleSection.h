#ifndef _DOUBLE_SECTION_H_
#define _DOUBLE_SECTION_H_
#include "SectionManager.h"

class DoubleSection : public SectionManager  
{  
    public:

        DoubleSection();
        bool run();
        void course(int direct);

    protected:

    private:

        SecParam Lcourse[10] = {
            {Section::VIRCLINE,{40, -20 , 43, 2.5 ,5.0},Section::LENGTH,{50, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.05, 43, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{100, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,30},Section::TIME,{20, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Rcourse[10] = {
            {Section::VIRCLINE,{40, -20 , 43, 2.5 ,5.0},Section::LENGTH,{1000, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

};
#endif