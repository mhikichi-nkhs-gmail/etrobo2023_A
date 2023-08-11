#include "FileWalker.h"

extern Process *gProcess;

FileWalker::FileWalker(Odometry *odo):
    Walker(odo)
{

}

void FileWalker::run()
{
    printf("GO\n");
    int check = mPro->writing();
    printf("check%f,,\n", check);
}

void FileWalker::init()
{

}

void FileWalker::setParam(char comment[])
{
    
}

void FileWalker::execStart()
{
    run();
}