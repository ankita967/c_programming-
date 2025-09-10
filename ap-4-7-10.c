//display this ap -4,7,10,13 upto n terms

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number= ");
    scanf("%d",&n);
    for(i=4;i<=3*n-1;i=i+3){
        printf("%d ",i);
    }
    return 0;
}

//output-
//Enter the number= 10
//4 7 10 13 16 19 22 25 28 