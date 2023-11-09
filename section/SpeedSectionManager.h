#ifndef _SPEED_SECTION_MANAGER_H_
#define _SPEED_SECTION_MANAGER_H_
#include "SectionManager.h"
#include "HackEv3.h"

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

#if SP == 1
        SecParam Lcourse[20] = {
            //{Section::FILE,{1,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::FILE,{2,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{90, 0, 9.9, 28, 4.6 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{288, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0, 13, 30, 4.5 ,17 , 0, 'LEFTEDGE'},Section::LENGTH,{323, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{90, 0, 9.9, 28, 4.6 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{503, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0, 14, 30, 4.5 ,17, 0, 'LEFTEDGE'},Section::LENGTH,{538, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{90, 0, 9.9, 28, 4.6 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{560, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0, 9.9, 27, 4.5 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{208,0.08, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::FILE,{3,0},Section::RECEPTION,{0,100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Rcourse[20] = {
            //{Section::FILE,{3,0},Section::RECEPTION,{1,300, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{10000000, Section::RESETLEN}, Section::EMNONE,{}},
         //   {Section::FILE,{2,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::TRACER,{90, 0, 9.7, 24, 4.45 , 0, 0, _EDGE},Section::LENGTH,{20, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::TRACER,{70, 0, 11, 25, 4.2 , 0, 0, _EDGE},Section::LENGTH,{50, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{90, 0, 9.9, 28, 4.7 , 0, 0, _EDGE},Section::LENGTH,{288, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{10000000, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0, 13, 30, 4.5 ,-17 , 0, _EDGE},Section::LENGTH,{323, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{90, 0, 9.9, 28, 4.6 ,0 , 0, _EDGE},Section::LENGTH,{503, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{10000, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0, 14, 30, 4.6 ,-17 , 0, _EDGE},Section::LENGTH,{538, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{80, 0, 9.9, 27, 4.5 ,0 , 0, _EDGE},Section::LENGTH,{560, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{10, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0, 9.9, 27, 5.0 ,0 , 0, _EDGE},Section::COLOR,{208,0.08, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::WALKER,{0,0},Section::TIME,{10000, Section::RESETLEN}, Section::EMNONE,{}},
         //   {Section::FILE,{3,0},Section::RECEPTION,{0,300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};
        #endif

#if SP == 2
        SecParam Lcourse[20] = {
            //{Section::FILE,{1,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::FILE,{2,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0, 9.9, 27, 4.55 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{288, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0, 13, 30, 4.5 ,17 , 0, 'LEFTEDGE'},Section::LENGTH,{323, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0, 9.9, 27, 4.5 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{503, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{60, 0, 14, 30, 4.5 ,17, 0, 'LEFTEDGE'},Section::LENGTH,{538, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0, 9.9, 27, 4.5 ,0 , 0, 'LEFTEDGE'},Section::LENGTH,{560, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{65, 0, 9.9, 27, 4.5 ,0 , 0, 'LEFTEDGE'},Section::COLOR,{208,0.07, Section::RESETLEN}, Section::EMNONE,{}},
            //{Section::FILE,{3,0},Section::RECEPTION,{0,100, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};

        SecParam Rcourse[20] = {
         //   {Section::FILE,{2,0},Section::TIME,{1, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0, 9.9, 27, 4.55 , 0, 0, _EDGE},Section::LENGTH,{288, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{65, 0, 13, 30, 4.6 ,-17 , 0, _EDGE},Section::LENGTH,{323, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0, 9.9, 27, 4.5 ,0 , 0, _EDGE},Section::LENGTH,{503, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{65, 0, 14, 30, 4.6 ,-17 , 0, _EDGE},Section::LENGTH,{538, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{70, 0, 9.9, 27, 4.5 ,0 , 0, _EDGE},Section::LENGTH,{560, Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{65, 0, 9.9, 27, 4.5 ,0 , 0, _EDGE},Section::COLOR,{208,0.07, Section::RESETLEN}, Section::EMNONE,{}},
         //   {Section::FILE,{3,0},Section::RECEPTION,{0,300, Section::FLNONE}, Section::EMNONE,{}},
            {Section::WALKER,{0,0},Section::TIME,{1, Section::RESETLEN}, Section::EMNONE,{}},
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};
        #endif
};

#endif
