//write a c programm to check if the armstrong or not

#include<stdio.h>
#include<math.h>
int main()
{
    int n,reminder,original,result=0;
    printf("Enter the number= ");
    scanf("%d",&n);
    n=original;
    while(n!=0){
        reminder=n%10;
        result=result+pow(reminder,3);
        n=n/10;
    }
    if(original==result){
        printf("it is a armstrong number ");
    }
    else{
        printf("It is not a armstrong number");
    }
    return 0;
}

//output-
//Enter the number= 153
//it is a armstrong number 