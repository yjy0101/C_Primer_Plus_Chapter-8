#include<stdio.h>
int main(void)
{
	int ch;

	while ((ch = getchar()) != EOF)		//EOF == -1
	{									//ctrl+D Linuxϵͳ��������
		putchar(ch);					//ctrl+Z Windowsϵͳ�������루����һ�еĿ�ʼ����
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