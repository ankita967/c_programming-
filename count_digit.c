//write a c program to count the digit of numbers present in the number

#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter the number= ");
    scanf("%d",&n);
    while(n!=0){
        count++;
        n=n/10;
    }
    printf("Total digits present in the number is = %d ",count);
    return 0;
}


//output-
//Enter the number= 12343234
//Total digits present in the number is = 8 