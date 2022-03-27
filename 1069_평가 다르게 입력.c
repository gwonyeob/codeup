#include<stdio.h>//jumsu:평가
int main()
{
	char jumsu;
	scanf("%c", &jumsu);
	switch (jumsu)
	{
	case 'A':
		printf("%s","best!!!");
			break;
	case 'B':
		printf("%s", "good!!");
			break;
	case 'C':
		printf("%s", "run!");
			break;
	case 'D':
		printf("%s","slowly~");
			break;
	default:
	    printf("%s", "what?");
		return 0;
	}

}
