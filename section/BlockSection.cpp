#include "BlockSection.h"
#include "Section.h"

BlockSection::BlockSection()
{
    mSectionIdx=0;
    mLastIdx=0;
}

bool BlockSection::run()
{
    if(point==0)
    {
        switch(lno)
        {
            case SET_L_PATTERN0:
                set();
                lno = L_PATTERN0;
                return false;
                break;
            case L_PATTERN0:
                set();
                lno = SET_L_PATTERN1;
                return false;
                break;
            case SET_L_PATTERN1:
                set();
                lno = L_PATTERN1;
                return false;
                break;
            case L_PATTERN1:
                set();
                lno = SET_L_PATTERN2;
                return false;
                break;
            case SET_L_PATTERN2:
                set();
                lno = L_PATTERN2;
                return false;
                break;
            case L_PATTERN2:
                set();
                lno = SET_L_PATTERN3;
                return false;
                break;
            case SET_L_PATTERN3:
                set();
                lno = L_PATTERN3;
                return false;
                break;
            case L_PATTERN3:
                set();
                return true;
        }
        
    }
    else
    {
        switch(rno)
        {
            case SET_R_PATTERN0:
                set();
                rno = R_PATTERN0;
                return false;
                break;
            case R_PATTERN0:
                set();
                rno = SET_R_PATTERN1;
                return false;
                break;
            case SET_R_PATTERN1:
                set();
                rno = R_PATTERN1;
                return false;
                break;
            case R_PATTERN1:
                set();
                rno = SET_R_PATTERN2;
                return false;
                break;
            case SET_R_PATTERN2:
                set();
                rno = R_PATTERN2;
                return false;
                break;
            case R_PATTERN2:
                set();
                rno = SET_R_PATTERN3;
                return false;
                break;
            case SET_R_PATTERN3:
                set();
                rno = R_PATTERN3;
                return false;
                break;
            case R_PATTERN3:
                set();
                return true;
        }
        return false;
    }
}

void BlockSection::course(int direct)
{
    printf("Block course\n");
    if(direct == 0)
    {
        printf("Block L\n");
        lno=SET_L_PATTERN0;
    }
    else
    {
        printf("Block R\n");
        rno=SET_R_PATTERN0;
    }
}