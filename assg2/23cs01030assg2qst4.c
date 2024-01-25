#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("\nyear number a is");
    scanf("%d",&a);
    b=a%4;
    if(b==0)
    printf("\nleap year");
    else
    printf("not leap year");
    return 0;
}