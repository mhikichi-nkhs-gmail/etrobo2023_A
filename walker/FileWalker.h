#ifndef FILEWALKER
#define FILEWALKER

#include "Walker.h"
#include "Process.h"

class FileWalker : Walker {
public:
    FileWalker( Odometry *odo );
    void init();
    void setParam(double flwk[]);
    void execStart();

protected:
    enum FILE_NO{
        SNAP1,
        SNAP2,
        BLOCK1,
        BLOCK2,
        IOT1
    };

private:
    int mNo;
    int mComment;
};

#endif