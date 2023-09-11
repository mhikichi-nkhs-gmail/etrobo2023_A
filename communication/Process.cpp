#include "Process.h"
#include "stdio.h"
#include "app.h"

extern void judge_task(intptr_t exinf);

Process::Process()
{
}


void Process::writing1(int pass) //snap
{
    FILE * fp;
    fp = fopen("/home/pi/work/RasPike/sdk/workspace/etrobo2023_A/SnapPipe", "w");
    printf("Popen\n");

    if(pass == 0)
    {
        fprintf(fp,"snap\n");
    }
    else
    {
        fprintf(fp,"getsnap\n");
        printf("fprint\n");
    }
    
    fclose(fp);
    printf("close\n");
}

void Process::writing2(int pass) //Block
{
    FILE * fp;
    fp = fopen("/home/pi/work/RasPike/sdk/workspace/etrobo2023_A/BlockPipe", "w");


    fprintf(fp,"socket!\n");
    fclose(fp);
}

void Process::writing3(int pass) //Iot
{
    FILE * fp;
    printf("SPpipe1\n");
    fp = fopen("/home/pi/work/RasPike/sdk/workspace/etrobo2023_A/sp2", "w");
    printf("%d\n",fp);
    printf("SPpipe2\n");

    fputs("socket!",fp);
    printf("SPpipe3\n");
    fclose(fp);
}
