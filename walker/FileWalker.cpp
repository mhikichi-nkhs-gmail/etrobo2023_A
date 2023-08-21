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
    switch(mNo){
        case SNAP1:
            mPro->writing1(mComment);
            break;
        case SNAP2:
            mPro->load1(mComment);
            break;
        case BLOCK1:
            mPro->writing2(mComment);
            break;
        case BLOCK2:
            mPro->load2(mComment);
            break;
        case IOT1:
            mPro->writing3(mComment);
            break;
    }
    //mPro->writing();
}

void FileWalker::setParam(int no,char comment[1024]) //使いたいパイプ、内容
{
    mNo = no;
    mComment[1024] = comment[1024];
}

void FileWalker::execStart()
{
    run();
}