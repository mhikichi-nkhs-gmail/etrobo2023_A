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

        int len = 136;

        SecParam Lcourse[100] = {
            {Section::VIRSLINE,{55, -25, 0, 28, 2.5 ,1.2},Section::LENGTH,{20, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::VIRCLINE,{80, -75 , 43, 2.5 ,5.0},Section::LENGTH,{23, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::TRACER,{80, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{130, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}
           // {Section::VIRSLINE,{55, -25, 0, 28, 2.5 ,1.2},Section::LENGTH,{30, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{125, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::LENGTH,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{-60},Section::TURNANGLE,{88.1, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-75, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{-15, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{75, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{15.5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{60},Section::TURNANGLE,{-87.9, Section::RESETANG}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::LENGTH,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{63, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-65},Section::TURNANGLE,{75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-75, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{-13.5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{75, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{15, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{65},Section::TURNANGLE,{-73.8, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{63, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-75},Section::TURNANGLE,{89, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-75, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{-13.5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{75, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{16, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{75},Section::TURNANGLE,{-90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.05, 50, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{63, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-65},Section::TURNANGLE,{78, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-75, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{-14, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{75, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{15, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{65},Section::TURNANGLE,{-78, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{63, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::LENGTH,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Rcourse[100] = {
        //    {Section::VIRSLINE,{55, 25, 0, 28, 2.5 ,1.2},Section::LENGTH,{30, Section::RESETLEN}, Section::EMNONE,{}},
        //    {Section::TRACER,{80, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{125, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::LENGTH,{0, Section::FLNONE}, Section::EMNONE,{}},
        /*    {Section::TWALKER,{60},Section::TURNANGLE,{-88.1, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-75, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{-15, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{75, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{15.5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-60},Section::TURNANGLE,{87.9, Section::RESETANG}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::LENGTH,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{63, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{65},Section::TURNANGLE,{-75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-75, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{-13.5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{75, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{15, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-65},Section::TURNANGLE,{73.8, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{63, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{75},Section::TURNANGLE,{-89, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-75, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{-13.5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{75, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{16, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-75},Section::TURNANGLE,{90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.05, 50, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{63, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{65},Section::TURNANGLE,{-78, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-75, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{-14, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{75, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{15, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-65},Section::TURNANGLE,{78, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{63, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::LENGTH,{0, Section::FLNONE}, Section::EMNONE,{}},*/
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam SLcourse[10] = {
            {Section::TRACER,{80, 0.05, 50, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{256-len, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-75},Section::TURNANGLE,{89, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-75, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{-13.5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{75, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{14, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{75},Section::TURNANGLE,{-87, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.05, 50, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{len, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam SRcourse[10] = {
            {Section::TRACER,{60, -0.4, 40, 2.5, 5.0 ,0 , 0 ,_EDGE},Section::LENGTH,{35, Section::RESETLEN}, Section::EMNONE,{}},//'d'noataigayowaikamo
            {Section::TRACER,{60, 0.05, 50, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{len, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-65},Section::TURNANGLE,{78, Section::RESETANG}, Section::EMNONE,{}},
        //    {Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TWALKER,{65},Section::TURNANGLE,{-83, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 50, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{171-len, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{65, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{19, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{108, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::VIRSLINE,{60, 16, 0, 28, 2.5 ,1.2},Section::LENGTH,{20.5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{32, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.05, 43, 2.5, 4.7 ,-28 , 0, _EDGE},Section::TURNANGLE,{78, Section::RESETANG}, Section::EMNONE,{}},
            //{Section::TRACER,{60, 0.05, 48, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{32, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{70, -0.5, 43, 2.5, 4.7 ,0 , 0, _EDGE},Section::COLOR,{354,0.86, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{300000000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

};
#endif