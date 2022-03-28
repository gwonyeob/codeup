#include<stdio.h>
int main()
{
	char c;//문자
	while(1)
	{
		scanf("%c ", &c);
		printf("%c\n", c);
		if (c == 'q') break;//q가 입력되면 q까지 출력하고 break
	}
	return 0;
}
