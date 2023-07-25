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
        virtual void init();
        virtual void execStart();
        
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
