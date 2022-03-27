#include<stdio.h>
int main()
{
	int input;//입력받는 정수
	scanf("%d", &input);
	while (input != 0)
	{
		input--;
		printf("%d\n", input);
	}
}

