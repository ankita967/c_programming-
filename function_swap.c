//write a c programm to swap two numbers using functions

#include<stdio.h>
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main()
{
    int a,b;
    printf("Enter the first number = ");
    scanf("%d",&a);
    printf("Enter the second number = ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("After swaping \n");
    printf("The first number is = %d\n",a);
    printf("The second number is =%d ",b);
    return 0;
}


//output-
//fgEnter the first number = 10
//Enter the second number = 20
//After swaping 
//The first number is = 20
//The second number is =10