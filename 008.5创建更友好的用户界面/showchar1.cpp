#include<stdio.h>
void display(char cr, int lines, int width);
int main(void)
{
	int ch;				//����ӡ�ַ�
	int rows, cols;		//����������

	printf("Enter a character and two integers:\n");
	while ((ch = getchar()) != '\n')			//y 5 5\n
	{
		scanf_s("%d %d", &rows, &cols);			//\n���ڻ�������
		display(ch, rows, cols);
		printf("Enter another character and tow integers;\n");
		printf("Enter a newline to quit.\n");
	}
	printf("Bye!.\n");

	return 0;
}

void display(char cr, int lines, int width)
{
	int row, col;

	for (row = 1; row <= lines; row++)
	{
		for (col = 1; col <= width; col++)
		{
			putchar(cr);
		}
		putchar('\n');/*����һ�в���ʼ�µ�һ��*/
	}

}
/*
Enter a character and two integers:
y 5 5												//y 5 5\n
yyyyy
yyyyy
yyyyy
yyyyy
yyyyy
Enter another character and tow integers;
Enter a newline to quit.
Bye!.
*/