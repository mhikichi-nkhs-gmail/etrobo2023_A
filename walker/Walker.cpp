#include "Walker.h"

Walker::Walker( Odometry *odo):
    mOdo(odo)
{
    mPid = new PID();

    mBright = gBrightness;
    mLength = gLength;
    mAngle = gTurnAngle;
    mXpos = gXPosition;
    mYpos = gYPosition;
}

void Walker::run()
{
    //printf("walker%d\n",mState);
    switch(mState) {
        case INIT:
            init();
            mState = RUN;
        case RUN:
            execStart();
            break;
    }
}

void Walker::setParam(double Array[])
{

}

/*void Walker::init()
{

}

void Walker::execStart()
{

}
*/
