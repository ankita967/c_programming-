//print percent of 4 subjects where marks are out of 40

#include<stdio.h>
int main()
{
    float m1,m2,m3,m4;
    printf("Enter the marks of Digital electronics= ");
    scanf("%f",&m1);
    printf("Enter the marks of Analog electronics= ");
    scanf("%f",&m2);
    printf("Enter the marks of Mathematics electronics= ");
    scanf("%f",&m3);
    printf("Enter the marks of Humanities electronics= ");
    scanf("%f",&m4);
    float p;
    p=(((m1+m2+m3+m4)/160)*100);
    printf("Your percentage is = %f",p);
    return 0;
}

//output-
//Enter the marks of Digital electronics= 39
//Enter the marks of Analog electronics= 34
//Enter the marks of Mathematics electronics= 37
//Enter the marks of Humanities electronics= 34
//Your percentage is = 90.000000