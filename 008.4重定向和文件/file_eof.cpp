//file_eof.cpp--��һ���ļ�����ʾ���ļ�
#include<stdio.h>
#include<stdlib.h>			//Ϊ��ʹ��exit()
int main(void)
{
	int ch;
	FILE* fp;
	char fname[50];								//�����ļ���

	fname[50 - 1] = 0;							//�ֶ���ĩβ��\0
	printf("Enter the nameof the file: ");
	scanf_s("%s", fname, 50);
	fp = fopen(fname,"r");						//�򿪴���ȡ�ļ�
	if (fp == NULL)								//���ʧ��
	{
		printf("Failed to open file. Bye\n");
		exit(1);
	}
	// getc(fp)�Ӵ򿪵��ļ��л�ȡһ���ַ�
	while ((ch = getc(fp)) != EOF)
	{
		putchar(ch);
	}
	fclose(fp);				//�ر��ļ�

	return 0;
}
/*
Enter the nameof the file: heizi.txt
ji ni tai mei
babe!
ni gan ma
ai yo
*/