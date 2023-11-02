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

    switch(pass)
    {
        case 0:
            fprintf(fp,"snapa\n");
            printf("snapa\n");
            break;
        case 1:
            fprintf(fp,"getsnap\n");
            printf("getsnap\n");
            break;
        case 2:
            fprintf(fp,"snapb\n");
            printf("snapb\n");
            break;
    }

    printf("close\n");
    fclose(fp);
    printf("closed\n");
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
