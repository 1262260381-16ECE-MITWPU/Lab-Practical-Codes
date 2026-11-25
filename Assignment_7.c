// Employee Payroll Program.Write a C Program for this system,using structures.
// Formula for calculating the gross salary is = basic + TA + HRA. TA = 23%,HRA = 30%.
// Enter name of employee,id,ta,hra,basic salary,gross,POST(>Lakh Manager,80-1 lakh: Sub manager,60-80 senior clerk,<60 junior clerk

//Initialization
#include<stdio.h>
int main(){
int i,n;
printf("How many employees are there?");
scanf("%d",&n);

//Defining Structure

struct Emp
{
int id,base,gross,ta,hra;
char name[30];
char post[15];
};

struct Emp strarr[7];
for(i=0;i<n;i++){
printf("Enter Employee ID %d:",i+1);
scanf("%d",&strarr[i].id);
printf("Enter name of employee %d:",i+1);
scanf("%s",&strarr[i].name);
printf("Enter base salary of employee (in thousands) %d:",i+1);
scanf("%d",&strarr[i].base);

strarr[i].ta = 0.23*strarr[i].base;
strarr[i].hra = 0.3*strarr[i].base;
strarr[i].gross = strarr[i].base + strarr[i].ta + strarr[i].hra;


}


// Displaying table of information
printf("RESULT\n___________\n");
for(i=0;i<n;i++){
printf("\nID:%d\nName:%s\nBase Salary:%d\nTA:%d\nHRA:%d\nGross Salary:%d\n",strarr[i].id,strarr[i].name,strarr[i].base*1000,strarr[i].ta*1000,strarr[i].hra*1000,strarr[i].gross*1000);
if(strarr[i].gross > 60){
	if(strarr[i].gross > 80){
		if(strarr[i].gross > 100){printf("Manager");}
		else{printf("Sub Manager");}
	}
	else{printf("Senior Clerk");}
}
else{printf("Clerk");}
printf("\n______________\n");
}

return 0;
}


