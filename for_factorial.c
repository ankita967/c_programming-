//write a c program to calculate the factorial of the given number

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number= ");
    scanf("%d",&n);
    int factorial=1;
    if(n<0){
        printf("We can not find the facctorial for thr givrn number: ");
    }
    else{
        for(i=1;i<=n;i++){
            factorial=factorial*i;
        }
        printf("Factorial of the given number is %d ",factorial);
    }
    return 0;
}

//output-
//Enter the number= 5
//Factorial of the given number is 120 