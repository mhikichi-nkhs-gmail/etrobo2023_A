#ifndef VIRCURVELINE
#define VIRCURVELINE

#include "SimpleWalker.h"

class VirCurveLine : public SimpleWalker 
{
    public:
        VirCurveLine(Odometry *odo,
            SpeedControl *scon);
        void run();
        void init();
        void execStart();

    protected:
        
};

#endif  
