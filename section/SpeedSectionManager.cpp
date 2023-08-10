#include "SpeedSectionManager.h"
#include "Section.h"

SpeedSectionManager::SpeedSectionManager()
{
    //set(sample);
    /*
    switch(mCourse) {
        case RCOURSE:
            set(Rcourse);
            break;
        case LCOURSE:
            set(Lcourse);
            break;
    }
    */
    /* test用初期化
 #if defined(MAKE_RIGHT)
      const int _EDGE = LineTracer::LEFTEDGE;
#else
      const int _EDGE = LineTracer::RIGHTEDGE;
#endif
    
     //LineTracer テスト
    Section *sc = new Section();
    
    Walker* tracer = sc->selectWalker(Section::TRACER); //ライントレーサーのオブジェクトを作る
    double lineArray[] = {50, 0 ,  30, 0.3, 0.1 ,0 , 0, _EDGE}; //値を作る
    tracer->setParam(lineArray); //値を渡す


    Judge* length = sc->selectJudge(Section::LENGTH); //距離判定のオブジェクトを作る
    double array[] = {30.0}; //値を作る
    length->setParam(array); //値を渡す

    addSection(sc);

    //SimpleWalker 用

    Section *one = new Section();

    Walker* walker = one->selectWalker(Section::WALKER);
    double simArray[] = {0,0};
    walker->setParam(simArray);
        
    Judge* stop = one->selectJudge(Section::LENGTH);
    double stopArray[] = {100,0};
    stop->setParam(stopArray);

    addSection(one);
    */

    /* SimpleWalkerテスト
    SimpleWalker* walker = (SimpleWalker*)sc->selectWalker(Section::WALKER);
    walker->setCommand(10,10);
    */

}

bool SpeedSectionManager::run()
{
    if(mSection[mSectionIdx]->run())
    {
        //printf("mscetion%d\n", mSectionIdx);
        //printf("mlast%d\n", mLastIdx);
        if(mSectionIdx == mLastIdx)
        {
            return true;
        }
        else
        {
            mSectionIdx++;
        }
    }
    return false;
}

void SpeedSectionManager::course(int direct)
{
    printf("BBBBB\n");
    if(direct == 0)
    {
        printf("通った\n");
        set(Lcourse);
    }
    else
    {
        printf("通らなかった\n");
        set(Rcourse);
    }
}