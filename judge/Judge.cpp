#include "Judge.h"
#include "Measure.h"

extern Length *gLength;
extern Brightness *gBrightness;
extern HsvHue *gHsvHue;
extern HsvSatu *gHsvSatu;
extern TurnAngle *gTurnAngle;
extern XPosition *gXPosition;
extern YPosition *gYPosition;

Judge::Judge():
    mState(INIT),
    mLength(gLength)
    //mBrightness(gBrightness),
    //mHsvHue(gHsvHue),
    //mHsvSatu(gHsvSatu),
    //mTurnAngle(gTurnAngle),
    //mXPosition(gXPosition),
    //mYposition(gYPosition)
{   
}

bool Judge::run()
{
    switch(mState){
        case INIT:
            init();
            break;
        case JUDGEMENT:
            bool result = judgement();
            return result;
    }
    return false;
}

void Judge::setParam(double param[])
{

}
void Judge::init()
{

    
}
bool Judge::judgement()
{
    return false;
}
