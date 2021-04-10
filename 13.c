#include<stdio.h>
#define w 10000

int main()
{
    int input;
    float get;

    scanf("%d",&input);
    if(input<=10*w)
    {
        get=input*0.1;
    }
    else if(input>10*w&&input<=20*w)
    {
        get=1.*w+(input-10*w)*0.075;
    }
    else if(input>20*w&&input<=40*w)
    {
        get=1.*w+10*w*0.075+(input-20*w)*0.05;
    }
    else if(input>40*w&&input<=60*w)
    {
        get=1.*w+10*w*0.0075+20*w*0.05+(input-40*w)*0.03;
    }
    else if(input>60*w&&input<=100*w)
    {
        get=1.*w+10*w*0.75+20*w*0.05+20*w*0.03+(input-60*w)*0.015;
    }
    else if(input>100*w)
    {
        get=1.*w+10*w*0.075+20*w*0.05+20*w*0.03+40*w*0.015+(input-100*w)*0.01;
    }
    printf("%.2f",get);
    return 0;
}