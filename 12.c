#include<stdio.h>
int main()
{
    int socre;
    scanf("%d",&socre);
    if(socre>=0&&socre<=100)
    {
        if(socre>=90){
            printf("A");
        }
        else if(socre>=80&&socre<90){
            printf("B");
        }
        else if(socre>=70&&socre<80){
            printf("C");
        }
        else if(socre>=60&&socre<70){
            printf("D");
        }
        else if(socre<60){
            printf("E");
        }
    }
    return 0;
}