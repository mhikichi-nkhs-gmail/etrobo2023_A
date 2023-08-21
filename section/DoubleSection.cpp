#include "DoubleSection.h"
#include "Section.h"

DoubleSection::DoubleSection()
{
    mSectionIdx=0;
    mLastIdx=0;
}

bool DoubleSection::run()
{
    if(mSection[mSectionIdx]->run())
    {
        printf("a\n");
        mSectionIdx++;
        if(mSectionIdx == mLastIdx)
        {
            return true;
        }
        /*else
        {
            mSectionIdx++;
        }*/
        printf("mscetion%d\n", mSectionIdx);
        printf("mlast%d\n", mLastIdx);
    }
    return false;
}

void DoubleSection::course(int direct)
{
    printf("BBBBB\n");
    if(direct == 0)
    {
        printf("c\n");
        set(Lpoint);
        set(Lnext);
        set(Lnext);
        set(Lnext);
        set(Lnext);
        set(LLast);
        set(LGoal);

    }
    else
    {
        printf("d\n");
        set(Rpoint);
    }
}

void DoubleSection::scircle(int direct)
{
    switch (direct) {
        case 0:
            printf("北");
            set(North);
            break;
        case 1:
            printf("北東\n");
            set(Neast);
            break;
        case 2:
            printf("東\n");
            set(East);
            break;
        case 3:
            printf("南東\n");
            set(Seast);
            break;
        case 4:
            printf("南\n");
            set(South);
            break;
        case 5:
            printf("西南\n");
            set(Swest);
            break;
        case 6:
            printf("西\n");
            set(West);
            break;
        case 7:
            printf("北西\n");
            set(Nwest);
            break;
        default:
            break;
    }
}