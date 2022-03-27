#include<stdio.h>
int main()
{
	int input;//입력받는 정수
	scanf("%d", &input);
	while (input!= 0)
	{
		printf("%d\n", input);
		input--;
	}
}
