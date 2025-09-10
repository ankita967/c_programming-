//given length and breadth of a rectangle write a program to find whether the area 
//of the rectangle is grater then its peramiter

#include<stdio.h>
int main()
{
    int l,b;
    printf("Enter the length = ");
    scanf("%d",&l);
    printf("Enter the breadth = ");
    scanf("%d",&b);
    int a= l*b;
    int p=2*(l+b);
    if(a>p){
        printf("In this rectangle area is grater then the peramiter ");
    }
    else{
        printf("In this rectangle area is  not grater then the peramiter");
    }
    return 0;
}

//output-
//Enter  the length = 10
//Enter the breadth = 3
//In this rectangle area is grater then the peramiter