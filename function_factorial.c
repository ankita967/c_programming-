//write a program using function factorial ofthe given number

#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int a;
    printf("Enter the number = ");
    scanf("%d",&a);
    int b=factorial(a);
    printf("The factorial of the given number is= %d",b);
    return 0;
}

//output-
//Enter the number = 5
//The factorial of the given number is= 120