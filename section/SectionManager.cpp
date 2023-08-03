#include "SectionManager.h"

SectionManager::SectionManager()
{
    
    mSectionIdx=0;
    mLastIdx=0;

    /*

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
    */
 
}

SectionManager::~SectionManager()
{
    msg_log("destruct SectionManager");

    for(int i=0;i<mLastIdx;i++) {
        delete mSection[i];
    }
}

void SectionManager::set(SecParam* array) //区間を作成する
{

    for(int i=0;; i++)
    {
        if(array[i].walker_no == Section::WANONE)
        {
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

bool SectionManager::run() //実行する
{
    return true;
}

void SectionManager::addSection(Section *sec) //区間追加
{
    mSection[mLastIdx++]=sec;
}

void SectionManager::reset() //初期化
{
    for(int i=0;i<mLastIdx;i++) {
        delete mSection[i];
    }
    mSectionIdx = 0;
    mLastIdx=0;
}

