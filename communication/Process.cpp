#include "Process.h"
#include "stdio.h"

Process::Process()
{
}

void Process::run()
{
    
}

void Process::load1(int pass) //snap
{
    FILE * fp;
    fp = fopen("SnapPipe2", "r");

    //	NULLポインタの終端までファイルから文字を1行ずつ読み込む
/*	while (fgets(pass, 1024, fp) != NULL)
	{
		//	読み込んだ1行を画面に出力する
		printf("%s", pass);
	}
*/
	fclose(fp);

}

void Process::load2(int pass) //block
{
    FILE * fp;
    fp = fopen("BlockPipe2", "r");

    //	NULLポインタの終端までファイルから文字を1行ずつ読み込む
/*	while (fgets(pass, 1024, fp) != NULL)
	{
		//	読み込んだ1行を画面に出力する
		printf("%s", pass);
	}
*/
	fclose(fp);

}

void Process::writing1(int pass) //snap
{
    FILE * fp;
    fp = fopen("SnapPipe", "w");

    fprintf(fp,"take picture");
    fclose(fp);
}

void Process::writing2(int pass) //Block
{
    FILE * fp;
    fp = fopen("BlockPipe", "w");

    fprintf(fp,"start");
    fclose(fp);
}

void Process::writing3(int pass) //Iot
{
    FILE * fp;
    fp = fopen("IotPipe", "w");

    fprintf(fp,"start");
    fclose(fp);
}
