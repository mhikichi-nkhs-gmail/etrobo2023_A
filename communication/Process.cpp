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
    fp = fopen("StartPipe", "w");
    if(fp == NULL)
    {
        printf("Ž¸”s\n");
        return 1;
    }

    fprintf(fp,"START\n");
    printf("finish");
    fclose(fp);

    return 0;
}

void init