//print the sum of the series 1-2+3-4+5----upto n terms


#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2!=0){
            sum=sum+i;
        }
        else{
            sum=sum-i;
        }
    }
    printf("The summation is = %d",sum);
    return 0;
}

//output-
//Enter the number= 7
//The summation is = 4