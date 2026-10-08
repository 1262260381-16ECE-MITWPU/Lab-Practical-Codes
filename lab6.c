#include<stdio.h>
int main(){
int n,i,j;
float avg;
printf("\nWelcome to the average batting score calculator\n");
printf("\nEnter the number of players in your team:\n",n);
scanf("%d",&n);
int A[n][6];

for(i=0;i<n;i++){
printf("\nEnter the batting score of the player %d in all the matches\n",i+1);
for(j=0;j<5;j++){
printf("IN Match %d:",j+1,A[i][j]);
scanf("%d",&A[i][j]);
}
}

printf("\nRESULTS\n_____");
for(i=0;i<n;i++){
avg = (A[i][0] + A[i][1] + A[i][2] + A[i][3] + A[i][4])/5;
printf("\nFor Player %d the average batting score in the five matches is: %f\n_____\n",i+1,avg);
}

return 0;
}
