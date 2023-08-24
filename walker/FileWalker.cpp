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
    printf("a");
    switch(mNo){
        case SNAP1:
            printf("snap1");
            mPro->writing1(mComment);
            break;
        case SNAP2:
            printf("snap2");
            mPro->load1(mComment);
            break;
        case BLOCK1:
            printf("block1");
            mPro->writing2(mComment);
            break;
        case BLOCK2:
            printf("block2");
            mPro->load2(mComment);
            break;
        case IOT1:
            printf("iot1");
            mPro->writing3(mComment);
            break;
    }
    //mPro->writing();
}

void FileWalker::setParam(int no,int comment) //�g�������p�C�v�A���e
{
    mNo = no;
    mComment = comment;
}

void FileWalker::execStart()
{
    run();
}