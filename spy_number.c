//write a program to check the given number is spy number or not


#include<stdio.h>
int main()
{
    int n, sum=0,prod=1;
    printf("Enter the number= ");
    scanf("%d",&n);
    while(n>0){
        int d=n%10;
        sum=sum+d;
        prod=prod*d;
        n=n/10;
    }
    if(sum==prod){
        printf("It is a spy number ");
    }
    else{
        printf("It is not a spy number ");
    }
    return 0;
}

//output-
//Enter the number= 123
//It is a spy number 