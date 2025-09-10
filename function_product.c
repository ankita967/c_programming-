//multiply two digit using function

#include<stdio.h>
int prod(int x,int y){
    return x*y;
}
int main()
{
    int a,b;
    printf("Enter the first number = ");
    scanf("%d",&a);
    printf("enter the second number = ");
    scanf("%d",&b);
    int multiplication= prod(a,b);
    printf("The multiplication of two number is = %d ",multiplication);
    return 0;
}

//output-
//Enter the first number = 2
//enter the second number = 5
//The multiplication of two number is = 10 