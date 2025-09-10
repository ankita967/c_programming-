//write a program to reverse the user given number

#include<stdio.h>
int main()
{
    int n,r=0;
    printf("Enter the number= ");
    scanf("%d",&n);
    while(n!=0){
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    printf("Now the reverse number is = %d",r);
    return 0;
}

//output-
//Enter the number= 1098
//Now the reverse number is = 8901