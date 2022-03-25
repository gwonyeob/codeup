#include <stdio.h>

int main() {
	int num;
	scanf_s("%d", &num);
	if(num>=90 && num<=100) {
		printf("A");
	} else if(num>=70 && num<=89) {
		printf("B");
	} else if(num>=40 && num<=69) {
		printf("C");
	} else {
		printf("D");
	}
}
