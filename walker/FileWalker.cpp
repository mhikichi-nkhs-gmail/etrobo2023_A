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
    if(mComment == 0)
    {
        switch(mNo){
            case SNAP:
                printf("snap1\n");
                mPro->writing(mComment);
                break;
            case BLOCK:
                printf("block1\n");
                mPro->writing(mComment);
                break;
            case IOT:
                printf("iot1\n");
                mPro->writing(mComment);
                break;
        }
    }
    else
    {
        switch(mNo){
            case SNAP:
                printf("snap2\n");
                mPro->load(mComment);
                break;
            case BLOCK:
                printf("block2\n");
                mPro->load(mComment);
                break;
        }
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