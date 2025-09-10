//take two integers input a and b :a>b and find the reminder when a is divided by b and print the reminder

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the dividend= ");
    scanf("%d",&a);
    printf("Enter the divisor= ");
    scanf("%d",&b);
    int q=a/b;
    int r= a-b*q;
    printf("The reminder is when %d is divided by %d is : %d ",a,b,r);
    return 0;
}

//output-
//Enter the dividend= 41
//Enter the divisor= 6
//The reminder is when 41 is divided by 6 is : 5 