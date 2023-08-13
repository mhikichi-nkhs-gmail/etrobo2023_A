#ifndef FILEWALKER
#define FILEWALKER

#include "Walker.h"
#include "Process.h"

class FileWalker : Walker {
public:
    FileWalker( Odometry *odo );
    void run();
    void init();
    void setParam(char comment[]);
    void execStart();
};

#endif