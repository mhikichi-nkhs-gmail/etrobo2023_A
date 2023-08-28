#include "Section.h"
 
extern SimpleWalker *gWalker;
extern LineTracer *gTracer;
extern VirCurveLine *gVerCLine;
extern VirStraightLine *gVerSLine;
extern TurnWalker *gTWalker;
extern FileWalker *gFile;
extern Odometry *gOdo;
extern SpeedControl *gSpeed;
extern Judge *mJudge;

Section::Section()
{
}

Section::~Section()
{
    msg_log("destruct Section\n");
    delete mWalker;
}


bool Section::run()
{
    printf("run_mWalker...%d\n",mWalker);
    //printf("check\n");
    //åˆ¤?¿½?
    if(mJudge->run())
    {
        //printf("check1\n");
        return true;
    }
    

    //èµ°?¿½?
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
        case VIRSLINE:
            mWalker = (Walker*)(new VirStraightLine(gOdo,gSpeed));
            printf("mVirSline\n");
            break;
        case TWALKER:
            mWalker = (Walker*)(new TurnWalker(gOdo,gSpeed));
            printf("mTWalker\n");
            break;
        case FILE:
            mWalker = (Walker*)(new FileWalker(gOdo));
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
            mJudge = (Judge*)(new JudgeColor());
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

