//do simple airthmetic c programs

#include<stdio.h>
int main()
{
    int a;
    printf("Enter the first number=");
    scanf("%d",&a);
    int b;
    printf("Enter the second number=");
    scanf("%d",&b);
    
    int c=(a+b);
    printf("The addition is = %d\n ",c);
    int d=(a-b);
    printf("The subtraction is = %d\n ",c);
    int e=(a*b);
    printf("The multiplication is = %d\n ",c);
    float f=(a/b);
    printf("The dividance is = %f\n",f);
    return 0;
}

//output-
//Enter the first number=10
//Enter the second number=5
//The addition is = 15
 //The subtraction is = 15
 //The multiplication is = 15
 //The dividance is = 2.000000