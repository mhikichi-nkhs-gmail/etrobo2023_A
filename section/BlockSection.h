#ifndef _BLOCK_SECTION_H_
#define _BLOCK_SECTION_H_

#include "SectionManager.h"
class Block_Section : public SectionManager
{
    public:
        BlockSection();
        bool run();
        void course(int direct);
    protected:
    private:
        int point;
        
        enum L_BLOCK_NO{
            SET_L_PATTERN0,
            L_PATTERN0,
            SET_L_PATTERN1,
            L_PATTERN1,
            SET_L_PATTERN2,
            L_PATTERN2
            SET_L_PATTERN3,
            L_PATTERN3
        };

        enum R_BLOCK_NO{
            SET_R_PATTERN0,
            R_PATTERN0,
            SET_R_PATTERN1,
            R_PATTERN1,
            SET_R_PATTERN2,
            R_PATTERN2
            SET_R_PATTERN3,
            R_PATTERN3
        };

        L_BLOCK_NO lno;
        R_BLOCK_NO rno;

        SecParam LP0[100] = 
        { 

        };

        SecParam LP1[100] = 
        { 

        };

        SecParam LP2[100] = 
        { 

        };

        SecParam LP3[100] = 
        { 

        };

        SecParam RP0[100] = 
        { 

        };

        SecParam RP1[100] = 
        { 

        };

        SecParam RP2[100] = 
        { 

        };

        SecParam RP3[100] = 
        { 

        };
        
};
#endif