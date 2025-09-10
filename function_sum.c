//sum of two digits using function

#include<stdio.h>
int add(int x,int y){
    return x+y;
}
int main()
{
    int a,b;
    printf("Enter the first number= ");
    scanf("%d",&a);
    printf("Enter the second number= ");
    scanf("%d",&b);
    int sum=add(a,b);
    printf("The summation of two digit is = %d ",sum);
    return 0;
}


//output-
//Enter the first number= 12
//Enter the second number= 13
//The summation of two digit is = 25 