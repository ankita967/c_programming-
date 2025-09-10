//take 3 numbers input and tell if they can be a sides of a triangle

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first side= ");
    scanf("%d",&a);
    printf("Enter the second side= ");
    scanf("%d",&b);
    printf("Enter the third side= ");
    scanf("%d",&c);
    if((a+b)>c &&(b+c)>a && (a+c)>b){
        printf("It is a valid triangle");
    }
    else{
        printf("Invalid triangle");
    }
    return 0;
}
//output
//Enter the first side= 12
//Enter the second side= 7
//Enter the third side= 6
//It is a valid triangle