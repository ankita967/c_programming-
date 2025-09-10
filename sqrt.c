//write s [rogramm to square root of any user given input number

#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("Enter the number= ");
    scanf("%d",&a);
    int root=sqrt(a);
    printf("The square root of the given number is = %d",root);
    return 0;
}

//output-
//Enter the number= 49
//The square root of the given number is = 7