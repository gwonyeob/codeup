#include<stdio.h>
int main()
{
    int a, b, c, d, e, zero;
    zero=0;
    scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
    printf("[%1d%1d%1d%1d%1d]\n", a, zero, zero, zero, zero);
    printf("[%1d%1d%1d%1d]\n", b, zero, zero, zero);
    printf("[%1d%1d%1d]\n", c, zero, zero);
    printf("[%1d%1d]\n", d, zero);
    printf("[%1d]",e);
    return 0;
}
