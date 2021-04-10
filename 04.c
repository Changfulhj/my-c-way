#include<stdio.h>
int main()
{
    float a,b,c,mid;
    scanf("%f %f %f",&a,&b,&c);
    if(a>b)
    {
        mid=a;
        a=b;
        b=mid;
    }
    if(a>c)
    {
        mid=a;
        a=c;
        c=mid;
    }
    if(b>c)
    {
        mid=b;
        b=c;
        c=mid;
    }
    printf("%.2f %.2f %.2f",a,b,c);
    return 0;
}
