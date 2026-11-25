#include<stdio.h>
int fac(int n);
int main(){
int n,res;
printf("What is the no. whose factorial is to be given?:",n);
scanf("%d",&n);
res = fac(n);
printf("The factorial of the given number is: %d\n",res);
return 0;
}

int fac(int n){
int fc = 1;
if(n == 0){return(1);}
fc= n * fac(n-1);
return(fc);
}
