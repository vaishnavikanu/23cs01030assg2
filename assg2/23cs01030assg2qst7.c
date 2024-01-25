#include<stdio.h>
int main()
{
    float c;
    float t;
    float p;
    float s;
    float r;
    float x;
    printf("cost of meal c=");
    scanf("%f",&c);
    printf("\npercentage tip t=");
    scanf("%f",&t);
    r=(t*c)/100.0;
    printf("\ntax percent p=");
    scanf("%f",&p);
    x=(p*c)/100.0;
    s=c+r+x;
    printf("\nbill s=%f",s);
    
}