#include<stdio.h>
#include<string.h>
int main(){
int t,a,b,ch,r;
char A[20],B[20];
t=0;
while(t==0){
printf("\nWelcome to the String Operations Menu\n");
printf("What would you like to perform?\n1-Print string lengths\n2-Copy string 1 to string 2\n3-Concatenate the two strings\n4-Compare the two strings\n5-Exit Program",ch);
scanf("%d",&ch);
printf("What is string 1:",A);
scanf("%s",&A);
printf("What is string 2:",B);
scanf("%s",&B);
printf("The strings given are:\n");
printf("%s\n",A);
printf("%s\n",B);
switch(ch){
case 1:
a = strlen(A);
b = strlen(B);
printf("Length of String 1 is:%d\nLength of String 2 is:%d",a,b);
break;

case 2:
strcpy(B,A);
printf("The value of string 2 has been updated to:%s",B);
break;

case 3:
strcat(A,B);
printf("The updated string is: %s",A);
break;

case 4:
r = strcmp(A,B);
if(r == 0){printf("The strings are similar");}
else{printf("The strings are different");}
break;

case 5:
t = 1;
break;

}
}

return 0;
}
