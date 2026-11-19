#include<stdio.h>
int main(){
    int n,i,rem,sum=0,temp;
    printf("Enter any number to check:");
    scanf("%d",& n);
    temp=n;
    for(i=n;i>0;i=i/10){
        rem=i%10;
        sum=sum+rem*rem*rem;
    }
    if(temp==sum){
        printf(" It is an Armstrong Number:");
    }else{
        printf("It is not an Armstrong Number");
    }
}