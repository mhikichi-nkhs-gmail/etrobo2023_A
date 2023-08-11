#ifndef FILEWALKER
#define FILEWALKER

#include "Walker.h"

class FileWalker : Walker {
public:
    Walker( Odometry *odo );
    void run();
    void setParam(double pipe[]);
    void init();
    void execStart();


};

#endif