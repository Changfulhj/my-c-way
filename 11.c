#include<stdio.h>
int main()
{
    int s;
    float f,p,w,d;

    scanf("%f%f%d",&p,&w,&s);
    if(s<250) d=0;
    else if(250<=s&&s<500) d=0.02;
    else if(500<=s&&s<1000) d=0.05;
    else if(1000<=s&&s<2000) d=0.08;
    else if(2000<=s&&s<3000) d=0.10;
    else if(3000<=s) d=0.15;

    f=p*w*s*(1.-d);
    printf("%.4f",f);
    return 0;
}