//checking.c--������֤
#include<stdio.h>
#include<stdbool.h>
//��֤������һ������
long get_long(void);
//��֤��Χ���������Ƿ���Ч
bool bad_limits(long begin, long end, long low, long high);
//����a-b֮�������ƽ����
double sum_squares(long a, long b);
int main(void)
{
	const long MIN = -10000000L;	//��Χ������
	const long MAX = +10000000L;	//��Χ������
	long start;						//�û�ָ���ķ�Χ��Сֵ
	long stop;						//�û�ָ���ķ�Χ���ֵ
	double answer;

	printf("This program computes the sum of the squares of integers in a range.\n");
	printf("The lower bound should not be less than -10000000 and\n");
	printf("the upper bound should not be more than +10000000.\n");
	printf("Enter the limits (enter 0 for both limits to quit):\n");
	printf("lower limit: ");
	start = get_long();
	printf("upper limit: ");
	stop = get_long();
	while (start != 0 || stop != 0)
	{
		if (bad_limits(start, stop, MIN, MAX))
		{
			printf("Please try again.\n");
		}
		else
		{
			answer = sum_squares(start, stop);
			printf("The sum of the squares of the integers ");
			printf("from %ld to %ld is %g\n", start, stop, answer);
		}
		printf("Enter the limits (enter 0 for both limits to quit):\n");
		printf("lower limit: ");
		start = get_long();
		printf("upper limit: ");
		stop = get_long();
	}
	printf("Done.\n");

	return 0;
}

long get_long(void)//��֤������һ������
{
	long input;
	char ch;

	while (scanf_s("%ld", &input) != 1)
	{
		while ((ch = getchar()) != '\n')
		{
			putchar(ch);//�����������
		}
		printf(" is not an integer.\nPlease enter an integer value, such as 25, 1314, -3...: ");
	}
	return input;
}

double sum_squares(long a, long b)//����a-b֮�������ƽ����
{
	double total = 0;
	long i;

	for (i = a;i <= b;i++)
	{
		total += (double)i * (double)i;
	}
	
	return total;
}

bool bad_limits(long begin, long end, long low, long high)//��֤��Χ���������Ƿ���Ч
{
	bool not_good = false;

	if (begin > end)
	{
		printf("%ld isn't smaller than %ld.\n", begin, end);
		not_good = true;
	}
	if (begin < low || end <low)
	{
		printf("Values must be %ld or greater.\n", low);
		not_good = true;
	}
	if (begin > high || end >high)
	{
		printf("Values must be %ld or less.\n", high);
		not_good = true;
	}
	return not_good;
}
/*
This program computes the sum of the squares of integers in a range.
The lower bound should not be less than -10000000 and
the upper bound should not be more than +10000000.
Enter the limits (enter 0 for both limits to quit):
lower limits: low
low is not an integer.
Please enter an integer value, such as 25, 1314, -3...: 3
upper limit: a big number
a big number is not an integer.
Please enter an integer value, such as 25, 1314, -3...: 12
The sum of the squares of the integers from 3 to 12 is 645
Enter the limits (enter 0 for both limits to quit):
lower limit: 80
upper limit: 10
80 isn't smaller than 10.
Please try again.
Enter the limits (enter 0 for both limits to quit):
lower limit: 0
upper limit: 0
Done.
*/

/*
This program computes the sum of the squares of integers in a range.
The lower bound should not be less than -10000000 and
the upper bound should not be more than +10000000.
Enter the limits (enter 0 for both limits to quit):
lower limit: 50
upper limit: 80
The sum of the squares of the integers from 50 to 80 is 133455
Enter the limits (enter 0 for both limits to quit):
lower limit: 80
upper limit: 70
80 isn't smaller than 70.
Please try again.
Enter the limits (enter 0 for both limits to quit):
lower limit: a
a is not an integer.
Please enter an integer value, such as 25, 1314, -3...: 6
upper limit: n
n is not an integer.
Please enter an integer value, such as 25, 1314, -3...: 7
The sum of the squares of the integers from 6 to 7 is 85
Enter the limits (enter 0 for both limits to quit):
lower limit: 0
upper limit: 0
Done.
*/