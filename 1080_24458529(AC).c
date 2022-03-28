#include<stdio.h>
int main()
{
	int input, sum = 0, i;
	scanf_s("%d", &input);
	for (i = 1; input > sum; i++)
	{
		sum += i;
	}
	printf("%d", i - 1);
	return 0;	    
}
