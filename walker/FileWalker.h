#ifndef FILEWALKER
#define FILEWALKER

#include "Walker.h"
#include "Process.h"

class FileWalker : Walker {
public:
    FileWalker( Odometry *odo );
    void run();
    void init();
    void setParam(int no, int use, char comment[1024]);
    void execStart();

private:
    int mNo;
    int mUse;
    char mComment[1024];
};

#endif