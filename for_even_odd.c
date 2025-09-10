//in c programming by for loop frint all even numbers from 1 to 20

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0){
        printf("%d  ",i);
        i++;
        }
    }
    return 0;
}

//output-
//Enter the number= 20
//2  4  6  8  10  12  14  16  18  20  


#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0){
        printf("%d  ",i);
        i++;
        }
    }
    return 0;
}
//output-
//Enter the number= 20
//1  3  5  7  9  11  13  15  17  19  