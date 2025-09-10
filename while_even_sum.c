//write a c programm to print sum of even  digits of a given number

#include<stdio.h>
int main()
{
    int n,sum=0,lastdigit=0;
    printf("Enter the number= ");
    scanf("%d",&n);
    while(n!=0){
        lastdigit=n%10;
        if(lastdigit%2==0){
        sum=sum+lastdigit;
        }
        n=n/10;
    }
    printf("Sum of the digits is = %d ",sum);
    return 0;
}

//output-
//Enter the number= 12345
//Sum of the digits is = 6 