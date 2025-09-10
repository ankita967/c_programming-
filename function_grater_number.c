//write a [rogram to find biggest of nthree integers using functions


#include<stdio.h>
int grater(int a,int b,int c){
    if(a>b && a>c)
    return a;
    if (b>a && b>c)
    return b;
    else
    return c;
}
int main()
{
    int a,b,c;
    printf("Enter the first number = ");
    scanf("%d",&a);
    printf("Enter the second number = ");
    scanf("%d",&b);
    printf("Enter the third number = ");
    scanf("%d",&c);
    int large=grater(a,b,c);
    printf("largest number = %d",large);
    return 0;
}

//output-
//Enter the first number = 4
//Enter the second number = 5
//Enter the third number = 6
//largest number = 6