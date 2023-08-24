#ifndef _DOUBLE_SECTION_H_
#define _DOUBLE_SECTION_H_
#include "SectionManager.h"

class DoubleSection : public SectionManager  
{  
    public:

        DoubleSection();
        bool run();
        bool init();
        void course(int direct);
        void scircle(int direct);

    protected:

    private:

        /*
        SecParam Lcourse[10] = {
            {Section::VIRCLINE,{80, -78 , 43, 2.5 ,5.0},Section::LENGTH,{23, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::TRACER,{80, 0.05, 50, 2.5, 5.0 ,0 , 0, _EDGE},Section::LENGTH,{130, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{130, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::LENGTH,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};
        */  
        int lno;
        int rno;

        enum L_NO{
            SET_LPOINT,
            LPOINT,
            SET_LNEXT,
            LNEXT,
            SET_L1ST,
            L1ST,
            SET_L2ND,
            L2ND,
            SET_L3RD,
            L3RD,
            SET_L4TH,
            L4TH,
            SET_LLAST,
            LLAST,
            SET_LGOAL,
            LGOAL
        };

        enum R_NO{
            RPOINT,
            RNEXT,
            R1ST,
            R2ND,
            R3RD,
            R4TH,
            RLAST,
            RGOAL
        };

       SecParam Lpoint[100] = {    //ç≈èâÇÃéBâeÉ|ÉCÉìÉgÇ‹Ç≈
            //4kaimedekaokenchisitatoki
            {Section::VIRSLINE,{55, -20, 0, 28, 2.5 ,1.2},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},/*RESETLEN*/
            {Section::TRACER,{60, 0.05, 48, 2.5, 7.5 ,0 , 0, _EDGE},Section::LENGTH,{115, Section::RESETLEN}, Section::EMNONE,{}},/*RESETLEN*/
            {Section::TRACER,{60, 0.05, 48, 2.5, 7.5 ,0 , 0, _EDGE},Section::COLOR,{208,0.3, Section::RESETLEN}, Section::EMNONE,{}},/*RESETLEN*/
            {Section::TWALKER,{-57.5},Section::TURNANGLE,{86, Section::RESETANG}, Section::EMNONE,{}},/*RESETANG*/
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-55, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{-15, Section::RESETLEN}, Section::EMNONE,{}},/*RESETLEN*/
            {Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::FILE,{},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{75, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{15.5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{60},Section::TURNANGLE,{-87.9, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Lnext[100] = {  //ìØÇ∂ìÆçÏÇÃåJÇËï‘Çµ
            {Section::TRACER,{70, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{63, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{65},Section::TURNANGLE,{-75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}}, 
            {Section::VIRSLINE,{-55, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{-13.5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::FILE,{},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{55, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{15, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{65},Section::TURNANGLE,{-73.8, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam L1st[100] = {  //1âÒñ⁄Ç≈ê¨å˜
            {Section::TRACER,{70, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{250, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{208,0.3, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::LENGTH,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam L2nd[100] = {  //2âÒñ⁄Ç≈ê¨å˜
            {Section::TRACER,{70, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{185, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{208,0.3, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::LENGTH,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam L3rd[100] = {  //3âÒñ⁄Ç≈ê¨å˜
            {Section::TRACER,{70, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{120, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{208,0.3, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::LENGTH,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam L4th[100] = {  //4âÒñ⁄Ç≈ê¨å˜
            {Section::TRACER,{70, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{60, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{208,0.3, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::LENGTH,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Llast[100] = {  //è¨â~ÇÃéBâe
            {Section::TRACER,{70, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{63, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{65},Section::TURNANGLE,{-75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}}, 
            //{Section::FILE,{},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{75, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{15.5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-60},Section::TURNANGLE,{87.9, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};
        
        SecParam Lgoal[100] = {  //ÉãÅ[ÉvÇî≤ÇØÇÈ
            {Section::TRACER,{70, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{63, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};


        SecParam Rpoint[100] = {    //ç≈èâÇÃéBâeÉ|ÉCÉìÉgÇ‹Ç≈
            //4kaimedekaokenchisitatoki
            {Section::VIRSLINE,{55, 20, 0, 28, 2.5 ,1.2},Section::LENGTH,{10, Section::RESETLEN}, Section::EMNONE,{}},/*RESETLEN*/
            {Section::TRACER,{60, 0.05, 48, 2.5, 7.5 ,0 , 0, _EDGE},Section::LENGTH,{115, Section::RESETLEN}, Section::EMNONE,{}},/*RESETLEN*/
            {Section::TRACER,{60, 0.05, 48, 2.5, 7.5 ,0 , 0, _EDGE},Section::COLOR,{208,0.3, Section::RESETLEN}, Section::EMNONE,{}},/*RESETLEN*/
            {Section::TWALKER,{57.5},Section::TURNANGLE,{-86, Section::RESETANG}, Section::EMNONE,{}},/*RESETANG*/
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-55, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{-15, Section::RESETLEN}, Section::EMNONE,{}},/*RESETLEN*/
            {Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::FILE,{},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{75, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{15.5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-60},Section::TURNANGLE,{87.9, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::LENGTH,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Rnext[100] = {  //ìØÇ∂ìÆçÏÇÃåJÇËï‘Çµ
            {Section::TRACER,{70, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{63, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{65},Section::TURNANGLE,{-75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}}, 
            {Section::VIRSLINE,{-55, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{-13.5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::FILE,{},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{55, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{15, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-65},Section::TURNANGLE,{73.8, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::LENGTH,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam R1st[100] = {  //1âÒñ⁄Ç≈ê¨å˜
            {Section::TRACER,{70, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{250, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{208,0.3, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::LENGTH,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam R2nd[100] = {  //2âÒñ⁄Ç≈ê¨å˜
            {Section::TRACER,{70, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{185, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{208,0.3, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::LENGTH,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam R3rd[100] = {  //3âÒñ⁄Ç≈ê¨å˜
            {Section::TRACER,{70, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{120, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{208,0.3, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::LENGTH,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam R4th[100] = {  //4âÒñ⁄Ç≈ê¨å˜
            {Section::TRACER,{70, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{60, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{208,0.3, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::LENGTH,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Rlast[100] = {  //è¨â~ÇÃéBâe
            {Section::TRACER,{70, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{63, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{65},Section::TURNANGLE,{-75, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}}, 
            //{Section::FILE,{},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{75, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{15.5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-60},Section::TURNANGLE,{87.9, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};
        
        SecParam Rgoal[100] = {  //ÉãÅ[ÉvÇî≤ÇØÇÈ
            {Section::TRACER,{70, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{63, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::LENGTH,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

            /*
            {Section::VIRSLINE,{-55, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{-13.5, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{55, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{16, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-75},Section::TURNANGLE,{86.5, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.05, 50, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{63, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{65},Section::TURNANGLE,{-78, Section::RESETANG}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{-55, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{-14, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::VIRSLINE,{55, 0, 0, 25, 2.5 ,2.0},Section::LENGTH,{15, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TWALKER,{-65},Section::TURNANGLE,{78, Section::RESETANG}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0.05, 48, 2.5, 5.0 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{63, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::LENGTH,{0, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};
            */

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