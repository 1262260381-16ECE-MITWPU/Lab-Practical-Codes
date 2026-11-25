#include<stdio.h>
int main(){
int i,n,fac;
printf("This program prints the factorial of any given number\n");
printf("\nInput the number whose factorial needs to be found?:",n);
scanf("%d",&n);

fac = 1;
for(i=0;i<n;i++){
fac = fac*(i+1);
}
printf("Factorial of %d is: %d\n",n,fac);
return 0;
}
