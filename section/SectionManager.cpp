#include "SectionManager.h"
#include "Section.h"

SectionManager::SectionManager()
{
    
    mSectionIdx=0;
    mLastIdx=0;
}

SectionManager::~SectionManager()
{
    msg_log("destruct SectionManager");

    for(int i=0;i<mLastIdx;i++) {
        delete mSection[i];
    }
}

void SectionManager::set(SecParam* array) //?¿½?¿½Ô‚ï¿½?¿½?¬?¿½?¿½?¿½?¿½
{

    for(int i=0;; i++)
    {
        //printf("é…å?—\n");
        if(array[i].walker_no == Section::WANONE)
        {
            printf("breakSet\n");
            break;
        }
        
        Section *sc = new Section(); //create

        Walker* walker = sc->selectWalker(array[i].walker_no);
        walker->setParam(array[i].secList); 

        Judge* judge = sc->selectJudge(array[i].judge_no); 
        judge->setParam(array[i].judList);

        addSection(sc);
        
    }
}

bool SectionManager::run() //?¿½?¿½?¿½s?¿½?¿½?¿½?¿½
{
    if(mSection[mSectionIdx]->run())
    {
        mSectionIdx++;
        if(mSectionIdx == mLastIdx)
        {
            printf("speed????????????\n");
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

void SectionManager::addSection(Section *sec) //?¿½?¿½Ô’Ç‰ï¿½
{
    mSection[mLastIdx++]=sec;
    printf("mLast %d\n",mLastIdx);
}

void SectionManager::reset() //?¿½?¿½?¿½?¿½?¿½?¿½
{
    for(int i=0;i<mLastIdx;i++) {
        delete mSection[i];
    }
    mSectionIdx = 0;
    mLastIdx=0;
}

