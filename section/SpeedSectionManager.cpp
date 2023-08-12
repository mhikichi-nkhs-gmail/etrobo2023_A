#include "SpeedSectionManager.h"
#include "Section.h"

SpeedSectionManager::SpeedSectionManager()
{
    mSectionIdx=0;
    mLastIdx=0;
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
    /* test用初期�?
 #if defined(MAKE_RIGHT)
      const int _EDGE = LineTracer::LEFTEDGE;
#else
      const int _EDGE = LineTracer::RIGHTEDGE;
#endif
    
     //LineTracer �?ス�?
    Section *sc = new Section();
    
    Walker* tracer = sc->selectWalker(Section::TRACER); //ライントレーサーのオブジェクトを作る
    double lineArray[] = {50, 0 ,  30, 0.3, 0.1 ,0 , 0, _EDGE}; //値を作る
    tracer->setParam(lineArray); //値を渡�?


    Judge* length = sc->selectJudge(Section::LENGTH); //距離判定�?�オブジェクトを作る
    double array[] = {30.0}; //値を作る
    length->setParam(array); //値を渡�?

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

    /* SimpleWalker�?ス�?
    SimpleWalker* walker = (SimpleWalker*)sc->selectWalker(Section::WALKER);
    walker->setCommand(10,10);
    */

}

bool SpeedSectionManager::run()
{
    if(mSection[mSectionIdx]->run())
    {
        mSectionIdx++;
        if(mSectionIdx == mLastIdx)
        {
            printf("speed終わった\n");
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

void SpeedSectionManager::course(int direct)
{
    printf("BBBBBB\n");
    if(direct == 0)
    {
        printf("e\n");
        set(Lcourse);
    }
    else
    {
        printf("f\n");
        set(Rcourse);
    }
}

