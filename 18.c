#include<stdio.h>
int main()
{
    int a, issu = 0;
    scanf("%d",&a);
    for (int i = 2; i <= a/2; i++)
    {
        if (a % i == 0)
        {
            issu = 1;
            break;
        }
    }
    if (issu == 0)
    {
        printf("prime");
    }
    else if(issu == 1)
    {
        printf("not prime");
    }
    return 0;
}