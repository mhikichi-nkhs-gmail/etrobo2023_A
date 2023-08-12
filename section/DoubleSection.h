#ifndef _DOUBLE_SECTION_H_
#define _DOUBLE_SECTION_H_
#include "SectionManager.h"

class DoubleSection : public SectionManager  
{  
    public:

        DoubleSection();
        bool run();
        void course(int direct);
        void scircle(int direct);

    protected:

    private:

        SecParam Lcourse[10] = {
            {Section::VIRCLINE,{80, -75 , 43, 2.5 ,5.0},Section::LENGTH,{23, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{130, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Rcourse[10] = {
            {Section::VIRCLINE,{40, -20 , 43, 2.5 ,5.0},Section::LENGTH,{1000, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam North[10] = {{Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};
        SecParam Neast[10] = {{Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};
        SecParam East[10] = {{Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};
        SecParam Seast[10] = {{Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};
        SecParam South[10] = {{Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};
        SecParam Swest[10] = {{Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};
        SecParam West[10] = {{Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};
        SecParam Nwest[10] = {{Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};


};
#endif