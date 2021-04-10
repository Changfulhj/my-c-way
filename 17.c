#include<stdio.h>
int main()
{
    int a=1,b=1;
    int sum=2;
    printf("%d %d ",a,b);
    for (int i = 0; i <38;i++)
    { 
        sum=a+b;
        b=a;
        a=sum;
        printf("%d ",sum);
    }
    getchar();
    return 0;
}