#include "Process.h"
#include "stdio.h"

Process::Process()
{
}

void Process::run()
{
    
}

void Process::load1(char pass[1024]) //snap
{
       
}

void Process::load2(char pass[1024]) //block
{
    FILE * fp;
    fp = fopen("BlockPipe2", "r");

    //	NULLポインタの終端までファイルから文字を1行ずつ読み込む
	while (fgets(pass, 1024, fp) != NULL)
	{
		//	読み込んだ1行を画面に出力する
		printf("%s", pass);
	}

	fclose(fp);

}

void Process::writing1(char pass[1024]) //snap
{
    FILE * fp;
    fp = fopen("SnapPipe", "w");

    fprintf(fp,"%s\n", pass[1024]);
    fclose(fp);
}

void Process::writing2(char pass[1024]) //Block
{
    FILE * fp;
    fp = fopen("BlockPipe", "w");

    fprintf(fp,"%s\n", pass[1024]);
    fclose(fp);
}

void Process::writing3(char pass[1024]) //Iot
{
    FILE * fp;
    fp = fopen("IotPipe", "w");

    fprintf(fp,"%s\n", pass[1024]);
    fclose(fp);
}
