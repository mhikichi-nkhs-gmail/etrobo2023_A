#include "FileWalker.h"

extern Process *gProcess;

FileWalker::FileWalker(Odometry *odo):
    Walker(odo)
{

}

void FileWalker::execStart()
{
    printf("GO\n");
    //int check = mPro->writing();
    //printf("check%f,,\n", check);
}

void FileWalker::init()
{
    int check = mPro->writing();
}

void FileWalker::setParam(char comment[])
{
    
}