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
    act_tsk(JUDGE_TASK);
}

void Process::load1(int pass) //snap
{
    FILE * fp;
    //fp = fopen("SnapPipe2", "r");   
    //	NULLポインタの終端までファイルから文字を1行ずつ読み込む
	while (fgets(pipe, 1024, fp) != NULL)
	{
		//	読み込んだ1行を画面に出力する
		printf("%s", pipe);
	}

	fclose(fp);

}

void Process::load2(int pass) //block
{
    FILE * fp;
    //fp = fopen("BlockPipe2", "r");

    //	NULLポインタの終端までファイルから文字を1行ずつ読み込む
	while (fgets(pipe, 1024, fp) != NULL)
	{
		//	読み込んだ1行を画面に出力する
		printf("%s", pipe);
	}

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
