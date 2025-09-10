//take a positive integer input and tell if it is divisible by 13 or not

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number== ");
    scanf("%d",&n);
    if(n%13==0){
        printf("It is divisible by 13 ");
    }
    else{
        printf("It is not divisible by 13");
    }
    return 0;
}

//output-
//Enter a number== 26
//It is divisible by 13 