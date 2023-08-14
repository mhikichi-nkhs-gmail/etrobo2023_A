#include "FileWalker.h"

extern Process *gProcess;

FileWalker::FileWalker(Odometry *odo):
    Walker(odo)
{

}

void FileWalker::run()
{
    printf("GO\n");
    //int check = mPro->writing();
    //printf("check%f,,\n", check);
}

void FileWalker::init()
{
    mPro->run(mNo,mUse,mComment);
}

void FileWalker::setParam(int no, int use, char comment[1024]) //���肽������A���M����M�A���e
{
    mNo = no;
    mUse = use;
    mComment[1024] = comment[1024];
}

void FileWalker::execStart()
{
    run();
}