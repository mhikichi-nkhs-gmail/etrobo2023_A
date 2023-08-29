#ifndef _BLOCK_SECTION_H_
#define _BLOCK_SECTION_H_
#include "SectionManager.h"

class BlockSection : public SectionManager
{
    public:

        BlockSection();
        bool run();
        void course(int direct);

    protected:

    private:

        SecParam Lcourse[10] = {
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};
        
        SecParam Rcourse[10] = {
            {Section::WANONE,{},Section::JUNONE,{}, Section::EMNONE,{}}};
        
};
#endif