//write a a c programm to check if the user given number is palindrome or not

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number= ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
        if(n%i==0){
        break;
        }
    }
    if(i==n){
        printf("It is a prime number");
    }
    else if(i==1){
        printf("It is neither prime nor a composite number");
    }
    else{
        printf("It is a composite number");
    }
    return 0;
}

//output-
//Enter the number= 3
//It is a composite number