#include "Process.h"
#include "stdio.h"

Process::Process()
{
}

void Process::load()
{

}

int Process::writing()
{
    //const int 
    FILE * fp;
    fp = fopen("SnapPipe", "w");
    if(fp == NULL)
    {
        printf("���s\n");
        return 1;
    }

    fprintf(fp,"snap\n");
    printf("finish");
    fclose(fp);

    return 0;
}
