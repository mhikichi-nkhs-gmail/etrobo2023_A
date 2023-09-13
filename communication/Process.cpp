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
    fp = fopen("work/RasPike/sdk/workspace/etrobo2023_A/SnapPipe", "w");

    if(pass == 0)
    {
        fprintf(fp,"snap\n");
    }
    else
    {
        fprintf(fp,"getsnap\n");
    }
    
    fclose(fp);
}

void Process::writing2(int pass) //Block
{
    FILE * fp;
    fp = fopen("work/RasPike/sdk/workspace/etrobo2023_A/BlockPipe", "w");

    fprintf(fp,"socket!\n");
    fclose(fp);
}

void Process::writing3(int pass) //Iot
{
    FILE * fp;
    fp = fopen("work/RasPike/sdk/workspace/etrobo2023_A/sp2", "w");

    fprintf(fp,"start\n");
    fclose(fp);
}
