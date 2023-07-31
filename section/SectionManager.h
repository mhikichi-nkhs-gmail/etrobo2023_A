#ifndef _SECTION_MANAGER_H_
#define _SECTION_MANAGER_H_

#include "Section.h"

class SectionManager {
    public:
        SectionManager();
        ~SectionManager();
        virtual bool run();
        void addSection(Section *);
        void reset();

        typedef struct SecParam_
        {
            enum Section::WALKER_NO walker_no;
            double secList[10];

            enum Section::JUDGE_NO judge_no;
            double judList[10];

            enum Section::EMGJUDGE_NO emgjudge_no;
            double emgList[10];

        }SecParam;
    
        

    protected:
#if defined(MAKE_RIGHT)
    const int _EDGE = LineTracer::LEFTEDGE;
#else
    const int _EDGE = LineTracer::RIGHTEDGE;
#endif
        Section *mSection[100];
        int mSectionIdx;
        int mLastIdx;  //最後

        //sample
        SecParam sample[10] = {
            {Section::TRACER,{60, 0 ,  40, 1.5, 0.1 ,0 , 0, _EDGE},Section::LENGTH,{300,Section::FLNONE}, Section::EMNONE,{}},
            {Section::TRACER,{30, 0 ,  30, 0.3, 0.1 ,0 , 0, _EDGE},Section::TURNANGLE,{-30.0, Section::FLNONE}, Section::EMNONE,{}},
            //{Section::TRACER,{60, 0 ,  30, 0.3, 0.1 ,0 , 0, _EDGE},Section::LENGTH,{150.0}, Section::EMNONE,{},Section::FLNONE},
            //{Section::TRACER,{10, 0 ,  30, 0.3, 0.1 ,0 , 0, _EDGE},Section::COLOR,{200,0.5}, Section::EMNONE,{},Section::FLNONE},
            //{Section::WALKER,{10,10},Section::TURNANGLE,{30}, Section::EMNONE,{},Section::FLNONE},
        
            {Section::WALKER,{0,0},Section::TURNANGLE,{10, Section::FLNONE}, Section::EMNONE,{}},
            /*
            {Section::TRACER,{50, 0 ,  30, 0.3, 0.1 ,0 , 0, _EDGE},Section::LENGTH,{100.0}, Section::EMNONE,{},Section::FLNONE},
            {Section::TRACER,{40, 0 ,  30, 0.3, 0.1 ,0 , 0, _EDGE},Section::LENGTH,{1000.0}, Section::EMNONE,{},Section::FLNONE},
            {Section::WALKER,{0,0},Section::LENGTH,{100,0}, Section::EMNONE,{},Section::FLNONE},
            */
       
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};


            //h , s 赤色 353,0.74 青色　210,0.83 緑　137,0.55 黄色　0~60,0.05
            //旋回の右が負の値

    private:


};

#endif
