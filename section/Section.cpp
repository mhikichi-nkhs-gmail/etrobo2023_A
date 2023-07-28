#include "Section.h"
 
extern SimpleWalker *gWalker;
extern LineTracer *gTracer;
extern Odometry *gOdo;
extern SpeedControl *gSpeed;
extern Judge *mJudge;

Section::Section()
{
}

Section::~Section()
{
    msg_log("destruct Section");
    delete mWalker;
}


bool Section::run()
{

    //printf("check\n");
    //判定
    if(mJudge->run())
    {
        //printf("check1\n");
        return true;
    }
    

    //走法
    mWalker->run();
    
    return false;
}

Walker *Section::selectWalker(int no)
{
    switch(no) {
        case WALKER:
            mWalker = (Walker*)(new SimpleWalker(gOdo,gSpeed));
            break;
        case TRACER:
            mWalker = (Walker*)(new LineTracer(gOdo,gSpeed));
           break;
        default:
            msg_log("selectWalker error!!");
    }

    return mWalker;
}


Judge *Section::selectJudge(int no)
{
    //printf("selectjudge%d\n", no);
    switch(no) {
        case LENGTH:
            mJudge = (Judge*)(new JudgeLength());
            break;
    }

    return mJudge;
}



