//write a c programm to check if the given number is palindrome or not


#include<stdio.h>
int main()
{
    int n,num,r,s=0;
    printf("enter the number= ");
    scanf("%d",&n);
    n=num;
    while(n!=0){
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(s==num){
        printf("It is a palindrome number ");
    }
    else{
        printf("It is not a palindrome number ");
    }
    return 0;
}

//output-
//enter the number= 121
//It is a palindrome number 