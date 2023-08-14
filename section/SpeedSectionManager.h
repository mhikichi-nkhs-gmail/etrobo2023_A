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
            //{Section::FILE,{},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.05, 43, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{500, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.1, 43, 2.5, 5.0 ,31 , 0, 'LEFTEDGE'},Section::TURNANGLE,{-90, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.05, 43, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{165, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.1, 43, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::TURNANGLE,{-90, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.1, 43, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{205,0.68, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,90},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::TRACER,{50, 0.05, 43, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{200, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::TRACER,{80, 0.1 ,  40, 1.5, 0.1 ,0 , 0, _EDGE},Section::LENGTH,{150, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::VIRCLINE,{20, 10 ,  43, 2.5, 5.0 },Section::LENGTH,{50, Section::RESETANG}, Section::EMNONE,{}}, //??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽA??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽa??ｿｽ?ｿｽA??ｿｽ?ｿｽp??ｿｽ?ｿｽx??ｿｽ?ｿｽp??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽAP??ｿｽ?ｿｽAI??ｿｽ?ｿｽAD
            //{Section::TRACER,{50, 0 ,  40, 1.5, 0.1 ,0 , 0, _EDGE},Section::LENGTH,{20, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{30,0},Section::LENGTH,{50, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::VIRCLINE,{40, -20 , 43, 2.5 ,5.0},Section::LENGTH,{1000, Section::RESETLEN}, Section::EMNONE,{}},
            /*
            {Section::TRACER,{80, 0 ,  40, 1.5, 0.1 ,0 , 0, _EDGE},Section::LENGTH,{50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,90},Section::TURNANGLE,{-700, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,-90},Section::TURNANGLE,{700, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{50, 0 ,  30, 0.3, 0.1 ,0 , 0, _EDGE},Section::LENGTH,{300, Section::RESETLEN}, Section::EMNONE,{}},
            */
            //{Section::WALKER,{10,10},Section::TURNANGLE,{30}, Section::EMNONE,{},Section::FLNONE},
            //{Section::VIRSLINE,{30, -45, 0, 25, 2.5 ,2.0},Section::LENGTH,{50, Section::RESETLEN}, Section::EMNONE,{}}, //?ｿｽ?ｿｽ?ｿｽx?ｿｽA?ｿｽp?ｿｽx,?ｿｽO?ｿｽAP,I,D
            //{Section::VIRSLINE,{-30, 90, 0, 25, 2.5 ,2.0},Section::LENGTH,{-50, Section::RESETLEN}, Section::EMNONE,{}}, //?ｿｽ?ｿｽ?ｿｽx?ｿｽA?ｿｽp?ｿｽx,?ｿｽO?ｿｽAP,I,D
            //{Section::VIRSLINE,{-30, 90, 0, 25, 2.5 ,2.0},Section::LENGTH,{-50, Section::RESETLEN}, Section::EMNONE,{}}, //?ｿｽ?ｿｽ?ｿｽx?ｿｽA?ｿｽp?ｿｽx,?ｿｽO?ｿｽAP,I,D
            //{Section::WALKER,{0,0},Section::LENGTH,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};
            //{Section::TWALKER,{-45},Section::TURNANGLE,{9000, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::VIRCLINE,{50, 40 ,  70, 1.5, 0.1 ,0 , 0},Section::TURNANGLE,{50, Section::RESETANG}, Section::EMNONE,{}}, //?ｿｽ?ｿｽ?ｿｽ?ｿｽ?ｿｽA?ｿｽ?ｿｽ?ｿｽa?ｿｽAP?ｿｽAI?ｿｽAD
           
            //{Section::VIRSLINE,{30, -45, 0, 25, 2.5 ,2.0},Section::LENGTH,{50, Section::RESETLEN}, Section::EMNONE,{}}, //?ｿｽ?ｿｽ?ｿｽx?ｿｽA?ｿｽp?ｿｽx,?ｿｽO?ｿｽAP,I,D

            //h , s ??ｿｽ?ｿｽﾔ色 353,0.74 ??ｿｽ?ｿｽﾂ色??ｿｽ?ｿｽ@210,0.83 ??ｿｽ?ｿｽﾎ　137,0.55 ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽF??ｿｽ?ｿｽ@0~60,0.05
            //??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽﾌ右??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽ??ｿｽ?ｿｽﾌ値
            //{Section::VIRSLINE,{30, -45, 0, 25, 2.5 ,2.0},Section::LENGTH,{50, Section::RESETLEN}, Section::EMNONE,{}}, //?ｿｽ?ｿｽ?ｿｽx?ｿｽA?ｿｽp?ｿｽx,?ｿｽO?ｿｽAP,I,D

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
