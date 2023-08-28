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

void Process::load(int pass)
{
    FILE * fp;
    act_tsk(JUDGE_TASK);   
	fclose(fp);
}

void Process::writing(int pass)
{
    FILE * fp;
    switch (pass)
    {
    case SNAP:
        fp = fopen("SnapPipe", "w");
        fprintf(fp,"snap\n");
        fclose(fp);
        break;
    case BLOCK:
        fp = fopen("BlockPipe", "w");
        fprintf(fp,"start\n");
        fclose(fp);
        break;
    case IOT:
        fp = fopen("IotPipe", "w");
        fprintf(fp,"start\n");
        fclose(fp);
        break;
    }   
}
