#include<stdio.h>
int main()
{int day,days,month,mont,year,yr,max_rate,max_tar_rate,min_tar_rate;
char sla,slas,sl,slash;
float age;
printf("enter your D.O.B in date,month and year format(-1 to end)\n");
printf("your date of birth:");
scanf("%d",&day);
while(day!=-1)
{printf("your month of birth:");
scanf("%d",&month);
printf("your year of birth:");
scanf("%d",&year);
printf("enter today's date\n");
printf("current date:");
scanf("%d",&days);
printf("current month:");
scanf("%d",&mont);
printf("current year:");
scanf("%d",&yr);
age=yr-year-1+((12-month+mont-1)/12.00)+((30-day+days)/365.00);
max_rate=220-(int)age;
max_tar_rate=max_rate*.85;
min_tar_rate=max_rate*.50;
printf("your age is %f\nyour max heart rate is %d\nyour target heart range is %d to %d\n\n",age,max_rate,min_tar_rate,max_tar_rate);
}return 0;
}
