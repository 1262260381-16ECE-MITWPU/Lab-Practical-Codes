void num_swap(int *n1,int *n2);

int main(){
int n1,n2;
printf("Enter number one:");
scanf("%d",&n1);
printf("Enter number two:");
scanf("%d",&n2);
printf("BEFORE SWAPPING: num1=%d num2=%d\n",n1,n2);
num_swap(&n1,&n2);
printf("AFTER SWAPPING: num1=%d num2=%d",n1,n2);
return 0;
}

void num_swap(int *n1,int *n2){
    int tp;
    tp = *n1;
    *n1 = *n2;
    *n2 = tp;
}
