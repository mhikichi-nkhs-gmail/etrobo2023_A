#include "Process.h"
#include "stdio.h"

Process::Process()
{
}

void Process::run(int no, int use, char comm[1024])
{
    
}

void Process::load()
{

}

void Process::writing()
{
    FILE * fp;
    fp = fopen("SnapPipe", "w");

    fprintf(fp,"snap\n");
    printf("finish");
    fclose(fp);
}
