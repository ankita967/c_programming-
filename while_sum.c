//write a c program to calculate the sum upto n terms

#include<stdio.h>
int main()
{
    int n,a=1,sum=0;
    printf("Enter upto how many turms you want to add= ");
    scanf("%d",&n);
    while(a<=n){
        sum=sum+a;
        a++;
    }
    printf("sum is = %d",sum);
    return 0;
}

//output-
//Enter upto how many turms you want to add= 7
//sum is = 28