#include<stdio.h>
int main()
{
    int x;
    int r;
    int k;
    int m;
    int q;
    int w,d;
    printf("\nenter no of days x=");
    scanf("%d",&x);
    r=x/365;
    k=x%365;
    printf("no of years r=%d\n",r);
    m=k/30;
    q=k%30;
    printf("months m=%d\n",m);
    w=q/7;
    d=q%7;
    printf("week w=%d\n",w);
    printf("days=%d\n",d);
    return 0;
}