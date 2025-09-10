//write a c program to check if the user given number is primr composite or neither prime
// neither composite

#include<stdio.h>
int main()
{
    int n,i,a=0;
    printf("Enter the number= ");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++){
        if(n%2==0){
            a=1;
            break;
        }
    }
    if(n==1){
        printf("It is neither prime nor a composite number ");
    }
    else if(n%2==0){
        printf("It is not a composite number");
    }
    else{
        printf("It is a composite number");
    }
    return 0;
}

//output-
//Enter the number= 711
//It is a composite number