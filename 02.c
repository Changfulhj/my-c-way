#include<stdio.h>
int main()
{
    int a,b,c,max,min;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
        {
            max=a;
        }
        else max=c;
    }
    if (b>c)
    {
        if (b>a)
        {
            max=b;
        }
        else max=c;
    }
    if (c>a)
    {
        if (c>b)
        {
            max=c;
        }
        else max=b;
    }
    printf("max=%d",max);
    return 0;
}