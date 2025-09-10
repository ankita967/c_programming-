//write a c programm to print all odd numbers using do while loop

#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter upto how many terms you want to print = ");
    scanf("%d",&n);
    do{
        printf("%d  ",i);
        i=i+2;
    }
    while(i<=n);
    return 0;
}

//output-
//Enter upto how many terms you want to print = 20
//1  3  5  7  9  11  13  15  17  19  