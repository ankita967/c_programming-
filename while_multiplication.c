//write a c programm to display a multiplication table

#include<stdio.h>
int main()
{
    int a,n,i=1;
    printf("Enter upto how many turms you want to print= ");
    scanf("%d",&n);
    printf("Which no= ");
    scanf("%d",&a);
    while(i<=n){   
    printf("%d * %d = %d\n",a,i,a*i);
    i++;
    }
    return 0;
}

//output-
//Enter upto how many turms you want to print= 10
//Which no= 7
//7 * 1 = 7
//7 * 2 = 14
//7 * 3 = 21
//7 * 4 = 28
//7 * 5 = 35
//7 * 6 = 42
//7 * 7 = 49
//7 * 8 = 56
//7 * 9 = 63
//7 * 10 = 70