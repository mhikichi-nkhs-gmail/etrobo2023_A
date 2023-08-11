#include "Process.h"
#include "stdio.h"

Process::Process()
{
}

void Process::load()
{

}

void Process::writing()
{
    FILE * fp = NULL;

    fp = fopen("memo.txt", "w");

    fclose(fp);
}