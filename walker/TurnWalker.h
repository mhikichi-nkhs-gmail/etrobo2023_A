#ifndef TURNWALKER
#define TURNWALKER

#include "SimpleWalker.h"

class TurnWalker : public SimpleWalker 
{
    public:
        TurnWalker(Odometry *odo,
            SpeedControl *scon);
        void run();
        void init();
        void execStart();

    protected:
        
    
};

#endif  
