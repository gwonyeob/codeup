#include<stdio.h>
int main()
{
    int a, b , c, result;
    scanf("%d %d %d", &a, &b, &c);
    result=a<b?a:b;
    result=result<c?result:c;
    printf("%d", result);
    
    
}
