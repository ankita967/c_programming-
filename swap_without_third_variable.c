//write a program to  swap to numbers without using third variable

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number = ");
    scanf("%d",&a);
    printf("enter the second number = ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The first number is = %d\n",a);
    printf("The second number is = %d",b);
    return 0;
}

//output-
//Enter the first number = 3
//enter the second number = 4
//The first number is = 4
//The second number is = 3