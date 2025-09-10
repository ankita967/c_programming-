//print a multiplication table of user given integer number

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number= ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}

//output-
//Enter the number= 7
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


#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number= ");
    scanf("%d",&n);
    for(i=1;i<=n*10;i=i+n){
        printf("%d ",i);
    }
    return 0;
}

//output-
//Enter the number= 6
//6 12 18 24 30 36 42 48 54 60 