#include<stdio.h>
int main(void)
{
	int ch;

	while ((ch = getchar()) != EOF)		//EOF == -1
	{									//ctrl+D Linux系统结束输入
		putchar(ch);					//ctrl+Z Windows系统结束输入（得在一行的开始处）
	}

	return 0;
}
/*
Hello world!\
Hello world!\
ji ni tai mei!babe.....
ji ni tai mei!babe.....
			1165443472
			1165443472
^Z
*/