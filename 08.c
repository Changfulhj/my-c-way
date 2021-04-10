#include<stdio.h>
int main()
{
    int year,month,day;
    printf("please input the year, the month and the day:\n");
    scanf("%d%d%d",&year,&month,&day);
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            {
            	if(day==31){
                    if(month==12){
                        printf("The next day is %04d 01 01",year+1);break;
                    }
                    else printf("The next day is %04d %02d 01",year,month+1);break;
                }
                else printf("The next day is %04d %02d %02d",year,month,day+1);break;
            }
        case 4:
		case 6:
		case 9:
		case 11:
			{
				if(day==30){ 
				printf("The next day is %04d %02d 01",year,month+1);break;
				} 
                else printf("The next day is %04d %02d %02d",year,month,day+1);break;
			 }
        case 2:
        	{
        		if(year%4==0&&year%100!=0||year%400==0){
        			if(day==29){ printf("The next day is %04d %02d 01",year,month+1);break;} 
        			else printf("The next day is %04d %02d %02d",year,month,day+1);break;
				}
        		else {
        			if(day==28){ printf("The next day is %04d %02d 01",year,month+1);break;} 
        			else printf("The next day is %04d %02d %02d",year,month,day+1);break;
				}
			}
    }

    return 0;
}