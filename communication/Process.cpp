#include "Process.h"
#include "stdio.h"

Process::Process()
{
}

void Process::run(int no, int use, char comm[1024])
{
    
}

void Process::load1()
{

}

void Process::load2()
{
    
}

void Process::writing1() //snap
{
    FILE * fp;
    fp = fopen("SnapPipe", "w");

    fprintf(fp,"snap\n");
    fclose(fp);
}

void Process::writing2() //Block
{
    FILE * fp;
    fp = fopen("BlockPipe", "w");

    fprintf(fp,"Block\n");
    fclose(fp);
}

void Process::writing3() //Iot
{
    FILE * fp;
    fp = fopen("IotPipe", "w");

    fprintf(fp,"Iot\n");
    fclose(fp);
}
