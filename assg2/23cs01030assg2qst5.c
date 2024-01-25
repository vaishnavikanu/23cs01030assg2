#include<stdio.h>
int main ()
{
    int a;
    printf("the value of a=");
    scanf("%d",&a);
    (a&1)?printf("odd"):printf("even");
    return 0;
}