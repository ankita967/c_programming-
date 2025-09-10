//dis play the gp-100-50-25- upto n terms


#include<stdio.h>
int main()
{
    int n,i,a=100;
    printf("Enter the number= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",a);
        a=a/2;
    }
    return 0;
}


//output-
//Enter the number= 3
//100 50 25 
