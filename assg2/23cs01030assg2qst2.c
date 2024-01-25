#include<stdio.h>
int main()
{
    int a=17;
    int b=-90;
    int c=12;
    int x;
    int y;
    int z;
    x=(a>b)?a:b;
y=(b>c)?b:c;
z=(x>y)?x:y;
printf("\nz=%d",z);
    return 0;
}