#include "SpeedSectionManager.h"
#include "Section.h"

SpeedSectionManager::SpeedSectionManager()
{
    // test用初期化
 #if defined(MAKE_RIGHT)
      const int _EDGE = LineTracer::LEFTEDGE;
#else
      const int _EDGE = LineTracer::RIGHTEDGE;
#endif
    Section *sc = new Section();
    
     //LineTracer テスト
    LineTracer* tracer = (LineTracer*)sc->selectWalker(Section::TRACER);

    tracer->setParam(25, 0 ,  30, 0.3, 0.1 );
    tracer->setEdgeMode(_EDGE);

    double array[1] = {50.0};

    Judge* length = sc->selectJudge(Section::LENGTH);
    length->setParam(array);

    addSection(sc);

    Section *one = new Section();

    SimpleWalker* walker = (SimpleWalker*)one->selectWalker(Section::WALKER);
    walker->setCommand(0,0);

    Judge* stop = one->selectJudge(Section::LENGTH);
    stop->setParam(array);

    addSection(one);

    

    
    /* SimpleWalkerテスト
    SimpleWalker* walker = (SimpleWalker*)sc->selectWalker(Section::WALKER);
    walker->setCommand(10,10);
    */

}

bool SpeedSectionManager::run()
{
    if(mSection[mSectionIdx]->run())
        return true;

    return false;
}