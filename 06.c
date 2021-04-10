#include<stdio.h>
int main()
{
    int year,month;
    printf("Please input the year and the month:\n");
    scanf("%d%d",&year,&month);
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: printf("this month has 31 days.");break;
        case 6:
		case 4:
		case 9:
		case 11: printf("this month has 30 days ");break;
		case 2:
			{
				if(year%4==0&&year%100!=0||year%400==0){
					printf("this has 29 days");
				}
				else printf("this year has 28 days");
			}
		}
    return 0;
}
