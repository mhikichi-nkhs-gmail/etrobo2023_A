#include "JudgeReception.h"

double time;
bool mresult;
int limtime;

JudgeReception::JudgeReception()
{

}

void JudgeReception::init()
{
    rtime = 0.0;
    act_tsk(JUDGE_TASK);
}

bool JudgeReception::judgement()
{
    measureTime();
    if(rtime > limtime || mresult == true)
    {
        return true;
    }
    return false;
}

void JudgeReception::reception(char result[])
{
    mresult = false;
    if(strcmp(result,'1') == 0)
    {
        mresult = true;
    }
    
    
}
void JudgeReception::measureTime()
{
    time = time + 1.0;
}

void JudgeReception::setParam(double recn[])
{

    limtime = recn[1];
    if(recn[0]==0.0)
    {
        char pipeName = "SnapPipe2";
    }
    else
    {     
        char pipeName = "BlockPipe2";
    }
}