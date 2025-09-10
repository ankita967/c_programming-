//write a program to square of any user given input number 

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    printf("enter the number= ");
    scanf("%d",&a);
    printf("Enter the power= ");
    scanf("%d",&b);
    int num=pow(a,b);
    printf("%d raised to the power %d is = %d ",a,b,num);
    return 0;
}

//output-
//enter the number= 2
//Enter the power= 6
//2 raised to the power 6 is = 64 