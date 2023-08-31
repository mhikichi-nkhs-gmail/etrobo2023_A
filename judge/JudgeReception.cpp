#include <string.h>
#include "JudgeReception.h"

double rtime;
bool mresult;
int limtime;
int rec = 0;
char * blo1;
char * blo2;
char * blo3;
char zr[2] = "0";
char buffer[10];
int mcount = 0;

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
    if(rec == 0)
    {
        blo1 = strtok(result,",");
        printf("%s\n",blo1);
    
        blo2 = strtok(NULL,",");
        printf("%s\n",blo2);

        blo3 = strtok(NULL,",");
        printf("%s\n",blo3);
        
    
        rec++;

        for(int a=0; a<3; a++)
        {
            switch (a){
                case 0:
                    result = blo1;
                    break;
                case 1:
                    result = blo2;
                    break;
                case 2:
                    result = blo3;
                    break;
            }
        
            for(int a=0; a<=16; a++)
            {
                if(a < 10)
                {
                    strcpy(zr, "0");
                    sprintf(zr, "%s%d", zr, a);
                    if(strcmp(result,zr));
                    {
                        mcount++;
                    }
                }
                else
                {
                    sprintf(buffer, "%d", a);
                    if(strcmp(result,buffer));
                    {
                        mcount++;
                    }
                }

            }

            if(mcount == 3)
            {
                mresult = true;
            }
        }
        
    }
    else
    {
        mresult = false;
        if(strcmp(result,"0") == 0||strcmp(result,"1") == 0)
        {
            mresult = true;   
        }
    }
    
}
void JudgeReception::measureTime()
{
    rtime = rtime + 1.0;
}

void JudgeReception::setParam(double recn[])
{
    limtime = recn[1];
}