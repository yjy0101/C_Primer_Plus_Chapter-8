#include<stdio.h>
int main(void)
{
	int guess = 1;
	char response;

	printf("Pick an integer from 1 to 100. I will try to guess ");
	printf("it.\nRespond with a y if my guess is right and with");
	printf("\nan n if it is wrong.\n");
	printf("Uh...is your number %d?\n", guess);

	while ((response = getchar()) != 'y')		//获取响应
	{
		if (response == 'n')
		{
			printf("Well, then, is it %d?\n", ++guess);
		}
		else
		{
			printf("Sorry, I understand only y or n.\n");
		}
		while (getchar() != '\n')			//读到的是缓冲区的第二个字符
		{
			continue;						//跳过剩余的输入行
		}
	}
	printf("I knew I could do it!\n");

	return 0;
}

/*
Pick an integer from 1 to 100. I will try to guess it.
Respond with a y if my guess is right and with
an n if it is wrong.
Uh...is your number 1?
n
Well, then, is it 2?
no
Well, then, is it 3?
forget it
Sorry, I understand only y or n.
n
Well, then, is it 4?
y
I knew I could do it!
*/