#include "Walker.h"

Walker::Walker( Odometry *odo):
    mOdo(odo)
{
    mPid = new PID();

    mBright = gBrightness;
}

void Walker::run()
{
    //printf("walker%d\n",mState);
    switch(mState) {
        case INIT:
            init();
            mState = RUN;
            break;
        case RUN:
            execStart();
            break;
    }
}

void Walker::init()
{

}

void Walker::execStart()
{

}
