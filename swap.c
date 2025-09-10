//write a program to swap to numbers

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number = ");
    scanf("%d",&a);
    printf("Enter the second number = ");
    scanf("%d",&b);
    int temp=a;
    a=b;
    b=temp;
    printf("The value of first is %d\n",a);
    printf("The second numbe is %d",b);
    return 0;
}

//output-
//Enter the first number = 7
//Enter the second number = 11
//The value of first is 11
//The second numbe is 7