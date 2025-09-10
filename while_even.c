//write a c program to print even numbers upto 20

#include<stdio.h>
int main()
{
    int n,i=0;
    printf("Enter upto how many turms you want to print = ");
    scanf("%d",&n);
    while(i<=n){
        printf("%d  ",i);
        i=i+2;
    }
    return 0;
}

//output-
//Enter upto how many turms you want to print = 20
//0  2  4  6  8  10  12  14  16  18  20  