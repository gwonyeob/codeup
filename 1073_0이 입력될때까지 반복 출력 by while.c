#include<stdio.h>
int main()
{
	int input=1; //입력받는 정수
	while (input != 0)
	{
		scanf("%d", &input);
		if (input == 0) break;// 이걸 안쓰면 0이 출력되고 끝남
		printf("%d\n", input);
		
	}

}

