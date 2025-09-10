//write a program to find that the number is even or odd or neutral

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number= ");
    scanf("%d",&n);
    if(n==0){
        printf("This is a neutral number ");
    }
    else if(n%2==0){
        printf("This is a even number");
    }
    else{
        printf("This is a odd number");
    }
    return 0;
}

//output-
//Enter a number= 711
//This is a odd number