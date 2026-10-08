#include<stdio.h>
int fibs(int n);
int main(){
int n;
int t3,t1=0;
int t2=1;
printf("Till what term do you want to print the Fibonacci Series?:",n);
scanf("%d",&n);
printf("0,1");
for(int i=1;i<=n-2;i++){
t3 = t1 + t2;
t1 = t2;
t2 = t3;
printf(",%d",t3);
}
return 0;
}
