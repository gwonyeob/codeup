#include <stdio.h>
int main() 
{
	int n, input;
	scanf("%d", &n);
x:	scanf("%d", &input);
	printf("%d\n", input);
	if (--n > 0)
		goto x;
}
