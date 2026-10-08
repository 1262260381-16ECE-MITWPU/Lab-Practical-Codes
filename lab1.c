#include<stdio.h>

int main(){
int num1,num2,ch,out;
float outp;
printf("Enter two numbers: ");
scanf("%d%d", &num1,&num2);
printf("1 - Addition\n");
printf("2 - Subtraction\n");
printf("3 - Multiplication\n");
printf("4 - Division\n");

printf("Entered numbers are:%d,%d\n",num1,num2);
printf("Choose an operation");
scanf("%d", &ch);

switch(ch)
{
case 1:
out = num1+num2;
printf("%d",out);
break;

case 2:
out = num1-num2;
printf("%d",out);
break;

case 3:
out = num1*num2;
printf("%d",out);
break;

case 4:
outp = num1/num2;
printf("%f",outp);
break;

}

return 0 ;
}
