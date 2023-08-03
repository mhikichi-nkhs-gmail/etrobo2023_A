#include "Judge.h"
#include "Measure.h"

double Judge::MEMOLEN = 0;
double Judge::MEMOANG = 0;


extern Length *gLength;
extern Brightness *gBrightness;
extern HsvHue *gHsvHue;
extern HsvSatu *gHsvSatu;
extern TurnAngle *gTurnAngle;
extern XPosition *gXPosition;
extern YPosition *gYPosition;

Judge::Judge():
    mState(INIT),
    mLength(gLength),
    mBrightness(gBrightness),
    mHsvHue(gHsvHue),
    mHsvSatu(gHsvSatu),
    mTurnAngle(gTurnAngle)
{   
}

bool Judge::run()
{
    //printf("judge%d\n",mState);
    switch(mState){
        case INIT:
            init();
            mState = JUDGEMENT;
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
