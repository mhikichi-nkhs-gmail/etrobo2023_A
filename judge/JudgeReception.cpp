#include "JudgeReception.h"

double time;
bool mresult;
String pipeName;
char array[4];
int loopCount;
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
    reception(result[]);
    if(rtime > limtime || mresult == true)
    {
        return true;
    }
    return false;
}

void JudgeReception::reception(String result)
{
    loopCount = 0;
    mresult = false;
    while(loopCount < size(array))
    {
        if(result == array[loopCount])
        {
            mresult = true;
            break;
        }
        loopCount = loopCount + 1:
    }
    
}
void JudgeReception::measureTime()
{
    time = time + 1.0;
}

void JudgeReception::setParam(double recn[])
{

    limtime = recn[1];
    FILE * fp;
    switch(recn[0])
    {
        //fp = fopen("SnapPipe2", "r");
    }
    else
    {     
        //fp = fopen("BlockPipe2", "r");
    }
}