//write a c programm to calculate the simple interest 

#include<stdio.h>
int main()
{
    float p,r,t,si;
    printf("Enter the principle = ");
    scanf("%f",&p);
    printf("Enter the rate = ");
    scanf("%f",&r);
    printf("Enter the time = ");
    scanf("%f",&t);
    si=((p*r*t)/100);
    printf("The simple interest is = %f ",si);
    return 0;
}

//output-
//Enter the principle = 711
//Enter the rate = 5
//Enter the time = 2
//The simple interest is = 71.099998 