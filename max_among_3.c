//write a c program to find the largest number among three number

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first number= ");
    scanf("%d",&a);
    printf("Enter the second number= ");
    scanf("%d",&b);
    printf("Enter the third number= ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("First number is largest");
    }
    else if(b>a && b>c){
        printf("second number is largest ");
    }
    else{
        printf("Third number is largest");
    }
    return 0;
}

//output-
//Enter the first number= 11
//Enter the second number= 33
//Enter the third number= 22