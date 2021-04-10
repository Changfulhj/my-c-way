#include<stdio.h>
int main()
{
    for (int i = 100; i <= 200; i++)
    {
        int issu = 0;
        for (int x = 2; x <= i/2; x++)
        {
            if (i % x == 0)
            {
                issu = 1;
                break;
            }
        }    
        if (issu == 0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}