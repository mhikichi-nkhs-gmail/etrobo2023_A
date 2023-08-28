#ifndef WALKER_H_
#define WALKER_H_

#include "Odometry.h"
#include "Brightness.h"
#include "PID.h"
#include "Measure.h"
#include "TurnAngle.h"
#include "XPosition.h"
#include "YPosition.h"
#include "Process.h"
#include "MotorManager.h"

extern Brightness *gBrightness;
extern XPosition *gXPosition;
extern YPosition *gYPosition;
extern TurnAngle *gTurnAngle;
extern Length *gLength;
extern Process *gProcess;
extern MotorManager *gMotorManager;

class Walker
{
    public:
        Walker( Odometry *odo );
        void run();
        virtual void setParam(double Array[]);
        virtual void init();
        virtual void execStart();
        
    protected:
        Odometry *mOdo;
        PID *mPid;

        XPosition *mXpos;
        YPosition *mYpos;
        Length *mLength;
        TurnAngle *mAngle;
        Brightness *mBright;

        Process *mPro;
        MotorManager *mMotor;

        enum State {
            INIT,
            RUN,
            END
        };

        State mState;

    private:

};
#endif
