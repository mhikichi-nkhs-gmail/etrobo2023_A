#include "DoubleSection.h"
#include "Section.h"

DoubleSection::DoubleSection()
{
    mSectionIdx=0;
    mLastIdx=0;
    printf("double\n");
}

bool DoubleSection::run()
{
    //printf("point,,%d\n", point);
    printf("lno,,%d\n", lno);
    if(point == 0)
    {
        printf("msec,,%d\n", mSectionIdx);
        switch(lno) {
            case SET_LBLUE_MARKER:
                printf("SET_LBLUE_MARKER\n");
                set(Lpoint);
                lno = LBLUE_MARKER;
                break;
            case LBLUE_MARKER:
                //printf("LBLUE_MARKER\n");
                lbluemarker();
                break;
            case SET_LNEXT_TAKE_POINT:
                //printf("SET_LNEXT_TAKE_POINT\n");
                set(Lnext);
                //lno = LNEXT_TAKE_POINT;
                lno = LESCAPE;
                break;
            case LNEXT_TAKE_POINT:
                //printf("LNEXT_TAKE_POINT1\n");
                //lnexttakepoint();
                break;
            case SET_LMOVE_SMALL1:
                //printf("SET_LMOVE_SMALL1\n");
                //set(L1st);
                lno = LMOVE_SMALL1;
                break;
            case LMOVE_SMALL1:
                //printf("LMOVE_SMALL1\n");
                //lmovesmalll();
                break;
            case SET_LMOVE_SMALL2:
                //set(L2nd);
                lno = LMOVE_SMALL2;
                break;
            case LMOVE_SMALL2:
                //lmovesmall2();
                break;
            case SET_LMOVE_SMALL3:
                //set(L3rd);
                lno = LMOVE_SMALL3;
                break;
            case LMOVE_SMALL3:
                //lmovesmall3();
                break;
            case SET_LMOVE_SMALL4:
                //set(L4th);
                lno = LMOVE_SMALL4;
                break;
            case LMOVE_SMALL4:
                //lmovesmall4();
                break;
            case SET_LLAST_TAKE_POINT:
                //set(Llast);
                lno = LLAST_TAKE_POINT;
                break;
            case LLAST_TAKE_POINT:
                //llasttakepoint();
                break;
            case SET_LESCAPE:
                //set(Lgoal);
                lno = LESCAPE;
                break;
            case LESCAPE:
                //lescape();
                return true;
        }
    }
    else
    {
        /*
        switch(rno) {
            case SET_RBLUE_MARKER:
                set(Rpoint);
                rno = RBLUE_MARKER;
                break;
            case RBLUE_MARKER:
                rbluemarker();
                break;
            case SET_RNEXT_TAKE_POINT:
                set(Rnext);
                rno = RNEXT_TAKE_POINT;
                break;
            case RNEXT_TAKE_POINT:
                rnexttakepoint();
                break;
            case SET_RMOVE_SMALL1:
                set(R1st);
                rno = RMOVE_SMALL1;
                break;
            case RMOVE_SMALL1:
                rmovesmalll();
                break;
            case SET_RMOVE_SMALL2:
                set(R2nd);
                rno = RMOVE_SMALL2;
                break;
            case RMOVE_SMALL2:
                rmovesmall2();
                break;
            case SET_RMOVE_SMALL3:
                set(R3rd);
                rno = RMOVE_SMALL3;
                break;
            case RMOVE_SMALL3:
                rmovesmall3();
                break;
            case SET_RMOVE_SMALL4:
                set(R4th);
                rno = RMOVE_SMALL4;
                break;
            case RMOVE_SMALL4:
                rmovesmall4();
                break;
            case SET_RLAST_TAKE_POINT:
                set(Rlast);
                rno = RLAST_TAKE_POINT;
                break;
            case RLAST_TAKE_POINT:
                rlasttakepoint();
                break;
            case SET_RESCAPE:
                set(Rgoal);
                rno = RESCAPE;
                break;
            case RESCAPE:
                rescape();
                return true;
        }
        */
        
    }
    return false;
}

void DoubleSection::course(int direct)
{
    lno = SET_LBLUE_MARKER;
    rno = SET_RBLUE_MARKER;
    printf("doublesection\n");
    if(direct == 0)
    {
        point = 0;
    }
    else
    {
        point = 1;
    }
}



void DoubleSection::lbluemarker()
{
    //printf("clear0\n");
    if(SectionManager::run()){
        //lno = SET_LNEXT_TAKE_POINT;
        lno = LESCAPE;
        printf("clear1\n");
    }
}
/*
void DoubleSection::lnexttakepoint()
{
    if(SectionManager::run()){
        lno = SET_LMOVE_SMALL1;
        printf("clear2\n");
    }
}



void DoubleSection::lmovesmalll()
{
    if(SectionManager::run()){
        lno = SET_LLAST_TAKE_POINT;
    }
}
*/

/*
void DoubleSection::lmovesmall2()
{
    if(SectionManager::run()){
        lno = SET_LLAST_TAKE_POINT;
    }
}

void DoubleSection::lmovesmall3()
{
    if(SectionManager::run()){
        lno = SET_LLAST_TAKE_POINT;
    }
}

void DoubleSection::lmovesmall4()
{
    if(SectionManager::run()){
        lno = SET_LLAST_TAKE_POINT;
    }
}

void DoubleSection::llasttakepoint()
{
    if(SectionManager::run()){
        lno = SET_LESCAPE;
    }
}

void DoubleSection::lescape()
{
    if(SectionManager::run()){
        lno = SET_LNEXT_TAKE_POINT;
    }
}
*/

/*
void DoubleSection::rbluemarker()
{
    if(SectionManager::run()){
        rno = SET_RNEXT_TAKE_POINT;
    }
}

void DoubleSection::rnexttakepoint()
{
    if(SectionManager::run()){
        rno = SET_RMOVE_SMALL1;
    }
}

void DoubleSection::rmovesmalll()
{
    if(SectionManager::run()){
        rno = SET_RNEXT_TAKE_POINT;
    }
}

void DoubleSection::rmovesmall2()
{
    if(SectionManager::run()){
        rno = SET_RNEXT_TAKE_POINT;
    }
}

void DoubleSection::rmovesmall3()
{
    if(SectionManager::run()){
        rno = SET_RNEXT_TAKE_POINT;
    }
}

void DoubleSection::rmovesmall4()
{
    if(SectionManager::run()){
        rno = SET_RNEXT_TAKE_POINT;
    }
}

void DoubleSection::rlasttakepoint()
{
    if(SectionManager::run()){
        rno = SET_RNEXT_TAKE_POINT;
    }
}

void DoubleSection::rescape()
{
    if(SectionManager::run()){
        rno = SET_RNEXT_TAKE_POINT;
    }
}
*/