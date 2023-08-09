#ifndef TURNWALKER
#define TURNWALKER

#include "SimpleWalker.h"
#include "Odometry.h"
#include "SpeedControl.h"
#include "PID.h"

class TurnWalker : public SimpleWalker 
{
    public:
        TurnWalker(Odometry *odo,
            SpeedControl *scon);
        void run();
        void setParam(double vcurve[]);
        void init();
        void execStart();

    protected:

    private:
        double calcTurn();
    
};

#endif  
