#include "Process.h"
#include "stdio.h"
#include "app.h"

extern void judge_task(intptr_t exinf);

Process::Process()
{
}

void Process::run()
{
    
}

void Process::load(int pass) //snap
{
    FILE * fp;
    act_tsk(JUDGE_TASK);   
	fclose(fp);
}

void Process::writing1(int pass) //snap
{
    FILE * fp;
    fp = fopen("SnapPipe", "w");

    fprintf(fp,"snap\n");
    fclose(fp);
}

void Process::writing2(int pass) //Block
{
    FILE * fp;
    fp = fopen("BlockPipe", "w");

    fprintf(fp,"start\n");
    fclose(fp);
}

void Process::writing3(int pass) //Iot
{
    FILE * fp;
    fp = fopen("IotPipe", "w");

    fprintf(fp,"start\n");
    fclose(fp);
}
