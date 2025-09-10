//display this ap 100,97,94 upto all terms which are positive

#include<stdio.h>
int main()
{
    int n,i,a=100;
    printf("Enter the number= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",a);
        a=a-3;
    }
    return 0;
}

//output-
//Enter the number= 34
//100 97 94 91 88 85 82 79 76 73 70 67 64 61 58 55 52 49 46 43 40 37 34 31 28 25 22 19 16 13 10 7 4 1 