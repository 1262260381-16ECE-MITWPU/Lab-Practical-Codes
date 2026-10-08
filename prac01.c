#include<stdio.h>
int main(){
int i,j,n,sum,per;
printf("How many students are there?",n);
scanf("%d",&n);
int A[n][6];
for(i=0;i<n;i++){
printf("What is the roll no. of the student %d:",i+1,A[i][0]);
scanf("%d",&A[i][0]);
for(j=1;j<6;j++){
printf("What are the marks in Subject %d:",j,A[i][j]);
scanf("%d",&A[i][j]);}}

for(i=0;i<n;i++){
for(j=0;j<6;j++){
if(j==0){printf("Roll No.%d\n",A[i][0]);}
else{printf("%d\n",A[i][j]);}}
sum = A[i][1] + A[i][2] + A[i][3] + A[i][4] + A[i][5];
per = sum/5;
if(per >= 40){printf("PASS\n_____\n");}
else{printf("FAIL\n_____\n");}
}

return 0;
}
