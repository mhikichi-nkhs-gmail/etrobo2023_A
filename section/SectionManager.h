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

        typedef struct Number_1
        {
            enum WALKER_NO
            {
                WALKER,
                TRACER
            };

            double secList[10];

        };
    
        

    protected:
        Section *mSection[100];
        int mSectionIdx;
        int mLastIdx;  //ç≈å„
    private:


};

#endif
