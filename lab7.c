#include<stdio.h>
int main(){
int i,j;
int A[10];

printf("\nEnter the elements of the array:\n");
for(i=0;i<10;i++){
printf("Enter element %d:",i+1,A[i]);
scanf("%d",&A[i]);
}
printf("_______\n");
for(i=0;i<10;i++){
j = 9-i;
printf("%d\n",A[j]);
}

return 0;
}
