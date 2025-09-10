//write a c program to calculate the area of a circle


#include<stdio.h>
int main()
{
    float a,r;
    printf("Enter the radious= ");
    scanf("%f",&r);
    float pi=3.142;
    a=(pi*r*r);
    printf("The area of a circle is = %f",a);
    return 0;
}

//output-
//Enter the radious= 7.1
//The area of a circle is = 158.388214