//dis play the gp-1-2-4-8-16 upto n terms


#include<stdio.h>
int main()
{
    int n,i,a=1;
    printf("Enter the number= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",a);
        a=a*2;
    }
    return 0;
}


//output-
//Enter the number= 10
//1 2 4 8 16 32 64 128 256 512 