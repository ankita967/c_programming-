//print the fibonacci term of the given number

#include<stdio.h>
int main()
{
    int n,a,b,sum;
    printf("Enter the number= ");
    scanf("%d",&n);
    a=1;
    b=1;
    sum=1;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("The fibonacci number is = %d",sum);
    return 0;
}

//output-
//Enter the number= 7
//The fibonacci number is = 13