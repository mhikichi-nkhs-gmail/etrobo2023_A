#include "Section.h"
 
extern SimpleWalker *gWalker;
extern LineTracer *gTracer;
extern VirCurveLine *gVerCLine;
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
        case VIRCLINE:
            mWalker = (Walker*)(new VirCurveLine(gOdo,gSpeed));
            break;
        //default:
            //msg_log("selectWalker error!!");
        case WANONE:
            break;
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
        case COLOR:
            //printf("color\n");
            mJudge = (Judge*)(new JudgeColor());
            //printf("mJudge%d", mJudge);
            break;
        case BRIGHTNESS:
            mJudge = (Judge*)(new JudgeBrightness());
            break;
        case TURNANGLE:
            mJudge = (Judge*)(new JudgeTurnAngle());
            break;    
        case TIME: 
            mJudge = (Judge*)(new JudgeTime());
            break;
    
        case JUNONE:
            break;
    }

    return mJudge;
}

/*EmgJudge *selectEmgJudge::selectEmgJudge(int no)
{
    switch(no) {
        case EMNONE:
            break;
    }
}
*/

