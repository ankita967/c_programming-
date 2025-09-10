//write a c programm to print sum of the digits of a given number

#include<stdio.h>
int main()
{
    int n,sum=0,lastdigit=0;
    printf("Enter the number= ");
    scanf("%d",&n);
    while(n!=0){
        lastdigit=n%10;
        sum=sum+lastdigit;
        n=n/10;
    }
    printf("Sum of the even digits is = %d ",sum);
    return 0;
}


//output-
//Enter the number= 12345435
//Sum of the even digits is = 27 