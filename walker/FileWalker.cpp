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
}

void FileWalker::init()
{
    printf("a\n");
    switch(mNo){
        case SNAP:
            printf("snap1\n");
            mPro->writing1(mComment);
            break;
        case BLOCK:
            printf("block1\n");
            mPro->writing2(mComment);
            break;
        case IOT:
            printf("iot1\n");
            mPro->writing3(mComment);
            break;
    }
    //mPro->writing();
}

void FileWalker::setParam(double flwk[]) //�g�������p�C�v�A���e
{
    mNo = flwk[0];
    mComment = flwk[1];
}

void FileWalker::execStart()
{
    run();
}