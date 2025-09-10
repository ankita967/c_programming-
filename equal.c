//write a program to check betweentwo number if they are equal,biggest or smallest

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number = ");
    scanf("%d",&a);
    printf("Enter the second number = ");
    scanf("%d",&b);
    if(a==b){
        printf("These two numbers are equal ");
    }
    else if(a>b || b>a){
        printf("One number is bigger than onther one");
    }
    else{
        printf("one number is smaller than another one");
    }
    return 0;
}

//output-
//Enter the first number = 12
//Enter the second number = 11
//One number is bigger than onther one