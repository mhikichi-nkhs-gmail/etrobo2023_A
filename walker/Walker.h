#ifndef WALKER_H_
#define WALKER_H_

#include "Odometry.h"
#include "Brightness.h"
#include "PID.h"

extern Brightness *gBrightness;

class Walker
{
    public:
        Walker( Odometry *odo );
        void run();
        virtual void setParam(double Array[]);
        virtual void init() = 0;
        virtual void execStart() = 0;
        
    protected:
        Odometry *mOdo;
        PID *mPid;

        Brightness *mBright;

        enum State {
            INIT,
            RUN,
            END
        };

        State mState;

    private:

};
#endif
