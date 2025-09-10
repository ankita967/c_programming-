//two number entered through the keyboard.write a programm to find the value of the number raised to the 
//power another

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the base= ");
    scanf("%d",&a);
    printf("Enter the power= ");
    scanf("%d",&b);
    int power=1;
    for(int i=1;i<=b;i++){
        power=power*a;
    }
    printf("%d raised to the power %d is= %d ",a,b,power);
    return 0;
}

//output-
//Enter the base= 2
//Enter the power= 5
//2 raised to the power 5 is= 32