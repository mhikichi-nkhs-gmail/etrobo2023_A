#include "SectionManager.h"

SectionManager::SectionManager()
{
    
    mSectionIdx=0;
    mLastIdx=0;

    for(int i=0;; i++)
    {
        if(sample[i].walker_no == Section::WANONE)
        {
            break;
        }
        
        Section *sc = new Section();

        Walker* walker = sc->selectWalker(sample[i].walker_no);
        walker->setParam(sample[i].secList); 

        Judge* judge = sc->selectJudge(sample[i].judge_no); 
        judge->setParam(sample[i].judList);

        addSection(sc);
        
    }
 
}

SectionManager::~SectionManager()
{
    msg_log("destruct SectionManager");

    for(int i=0;i<mLastIdx;i++) {
        delete mSection[i];
    }
}

bool SectionManager::run()
{
    return true;
}

void SectionManager::addSection(Section *sec)
{
    mSection[mLastIdx++]=sec;
}

void SectionManager::reset()
{
    for(int i=0;i<mLastIdx;i++) {
        delete mSection[i];
    }
    mSectionIdx = 0;
    mLastIdx=0;
}

