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
    time = 0.0;
}

bool JudgeReception::judgement()
{
    if(time < limtime && mresult == true)
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
        case 0.0:
            pipeName = "SnapPipe2";
            array[0]={'1'};
            fp = fopen("SnapPipe2", "r");
            break;
        case 1.0:
            pipeName = "BlockPipe2";
            array[]={'0','1','2','3'};
            fp = fopen("BlockPipe2", "r");
            break;
    }
}