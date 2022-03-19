
#include <stdio.h>
 
 
int main (void)
{
    int num1, num2, num3, sum;
    float avr;
    
    scanf("%d %d %d", &num1, &num2, &num3);
    sum = num1 + num2 + num3;
    avr = (float)sum/3;
    
    printf("%d\n",sum);
    printf("%.01f",avr);
    
    return 0;
}
