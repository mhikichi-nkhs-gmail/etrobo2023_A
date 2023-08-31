#include "DoubleSection.h"
#include "Section.h"

DoubleSection::DoubleSection()
{
    mSectionIdx=0;
    mLastIdx=0;
}

bool DoubleSection::run()
{
    printf("HELLO\n");
    if(lno == 0)
    {
        switch(lno) {
            case SET_LPOINT:
                printf("WWWWWW\n");
                set(Lpoint);
                lno = LNEXT;
                break;
            case LNEXT:
                set(Lnext);
                break;
            case L1ST:
                set(L1st);
                break;
            case L2ND:
                set(L2nd);
                break;
            case L3RD:
                set(L3rd);
                break;
            case L4TH:
                set(L4th);
                break;
            case LLAST:
                set(Llast);
                break;
            case LGOAL:
                set(Lgoal);
                return true;
        }
    }
    else
    {
        switch(rno) {
            case RPOINT:
                set(Rpoint);
                break;
            case RNEXT:
                set(Rnext);
                break;
            case R1ST:
                set(R1st);
                break;
            case R2ND:
                set(R2nd);
                break;
            case R3RD:
                set(R3rd);
                break;
            case R4TH:
                set(R4th);
                break;
            case RLAST:
                set(Rlast);
                break;
            case RGOAL:
                set(Rgoal);
                return true;
        }
    }
    return false;
}

/*bool DoubleSection::init()
{
   if(SectionManager::run())
}*/

void DoubleSection::course(int direct)
{
    printf("ZZZZZZZ\n");
    if(direct == 0)
    {
        lno = LPOINT;
    }
    else
    {
        rno = RPOINT;
    }
}

