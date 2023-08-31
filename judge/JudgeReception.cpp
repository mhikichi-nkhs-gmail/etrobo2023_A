#include <string.h>
#include "JudgeReception.h"

double rtime;
bool mresult;
int limtime;

JudgeReception::JudgeReception()
{
    
}

void JudgeReception::init()
{
    rtime = 0.0;
    mresult = false;
    act_tsk(JUDGE_TASK);
}

bool JudgeReception::judgement()
{
    if(rtime < limtime && mresult == true)
    {
        return true;
    }
    return false;
}

void JudgeReception::reception(char result[])
{
    mresult = false;
    if(strcmp(result,"0") == 0||strcmp(result,"1") == 0||strcmp(result,"2") == 0||strcmp(result,"3") == 0)
    {
        mresult = true;   
    }
    
}
void JudgeReception::measureTime()
{
    rtime = rtime + 1.0;
}

void JudgeReception::setParam(double recn[])
{
    
    limtime = recn[1];
    FILE * fp;
    if (recn[0] == 0.0)
    {
        //fp = fopen("SnapPipe2", "r");
    }
    else
    {     
        //fp = fopen("BlockPipe2", "r");
    }
}