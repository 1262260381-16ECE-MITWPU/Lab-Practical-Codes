#include<stdio.h>
int main()
{
int num,time,count,mult =0;
printf("Enter a number to get its multiplication table 12 times: ");
scanf("%d",&num);
for(count=1;count <= 12;count++)
{
mult=count*num;
printf("%d x %d = %d\n",num,count,mult);
}
return 0;
}
