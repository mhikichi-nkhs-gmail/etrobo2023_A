#ifndef VIRSTRAIGHTLINE
#define VIRSTRAIGHTLINE

#include "SimpleWalker.h"

class VirStraightLine : public SimpleWalker 
{
    public:
        VirStraightLine(Odometry *odo,
            SpeedControl *scon);
        void run();
        void init();
        void execStart();

    protected:
        
     
};

#endif  
