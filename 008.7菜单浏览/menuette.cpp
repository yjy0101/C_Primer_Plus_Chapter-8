//menuette.c--菜单程序
#include<stdio.h>
char get_choice(void);//获取正确的选择
char get_first(void);//只会获取第一个字符
int get_int(void);//获取正确的整型
void count(void);//数数
int main(void)
{
	int choice;
	void count(void);

	while ((choice = get_choice()) != 'q')
	{
		switch (choice)
		{
		case 'a':
			printf("Buy low, sell high.\n");
			break;
		case 'b':
			putchar('\a');
			break;
		case 'c':
			count();
			break;
		default:
			printf("Program error!\n");
		}
	}
	printf("Bye.\n");

	return 0;
}

void count(void)
{
	int n, i;

	printf("Count how far? Enter an integer:\n");
	n = get_int();
	for (i = 1; i <= n; i++)
	{
		printf("%d\n", i);
	}
	while (getchar() != '\n')
	{
		continue;
	}
}

char get_choice(void)
{
	int ch;

	printf("Enter the letter of your choice:\n");
	printf("a.advice           b.bell\n");
	printf("c.count            q.quit\n");
	ch = get_first();
	while ((ch < 'a' || ch > 'c') && ch != 'q')
	{
		printf("Please respond with a, b, c, or q.\n");
		ch = get_first();
	}
	return ch;
}

char get_first(void)
{
	int ch;

	ch = getchar();
	while (getchar() != '\n')
	{
		continue;
	}
	return ch;
}

int get_int(void)
{
	int input;
	char ch;

	while (scanf_s("%d",&input) != 1)
	{
		while ((ch = getchar()) != '\n')
		{
			putchar(ch);
		}
		printf(" is not an integer.\nPlease enter an ");
		printf("integer value, such as 25, -13, or 3: ");
	}
	return input;

}

/*
Enter the letter of your choice:
a.advice           b.bell
c.count            q.quit
a
Buy low, sell high.
Enter the letter of your choice:
a.advice           b.bell
c.count            q.quit
b
Enter the letter of your choice:
a.advice           b.bell
c.count            q.quit
c
Count how far? Enter an integer:
two
two is not an integer.
Please enter an integer value, such as 25, -13, or 3: 2
1
2
Enter the letter of your choice:
a.advice           b.bell
c.count            q.quit
d
Please respond with a, b, c, or q.
q
Bye.
*/