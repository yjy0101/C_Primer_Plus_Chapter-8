#include<stdio.h>
int main(void)
{
	int guess = 1;

	printf("Pick an integer from 1 to 100. I will try to guess ");
	printf("it.\nRespond with a y if my guess is right and with");
	printf("\nan n if it is wrong.\n");
	printf("Uh...is your number %d?\n", guess);

	while (getchar() != 'y')
	{
		printf("Well, then, is it %d?\n", ++guess);
	}
	printf("I knew I could do it!\n");

	return 0;
}
/*
Pick an integer from 1 to 100. I will try to guess it.
Respond with a y if my guess is right and with
an n if it is wrong.
Uh...is your number 1?
n											按了n后还按了Enter，所以有两次输入，后面循环两次
Well, then, is it 2?
Well, then, is it 3?
n
Well, then, is it 4?
Well, then, is it 5?
y
I knew I could do it!
*/