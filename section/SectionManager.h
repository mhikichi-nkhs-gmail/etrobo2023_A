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

            enum Section::FLAG_NO flag_no;

        }SecParam;
    
        

    protected:
#if defined(MAKE_RIGHT)
    const int _EDGE = LineTracer::LEFTEDGE;
#else
    const int _EDGE = LineTracer::RIGHTEDGE;
#endif
        Section *mSection[100];
        int mSectionIdx;
        int mLastIdx;  //ç≈å„

        //sample
        SecParam sample[10] = {{Section::TRACER,{70, 0 ,  30, 0.3, 0.1 ,0 , 0, _EDGE},Section::LENGTH,{30.0}, Section::EMNONE,{},Section::FLNONE},
        {Section::WALKER,{10,10},Section::LENGTH,{100}, Section::EMNONE,{},Section::FLNONE},
        {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{},Section::FLNONE}};

    private:


};

#endif
