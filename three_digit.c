//take positive integer to tell if it is a three digit n umber or not

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);
    if(n>99 && n<1000){
        printf("It is a three digit number ");
    }
    else{
        printf("It is not a three digit number ");
    }
    return 0;
}

//output-
//Enter the number = 711
//It is a three digit number 