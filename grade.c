//take input percentage of a student and print the grade according to marks

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the marks= ");
    scanf("%d",&n);
    if(n>89 &&n<=100){
        printf("Excellent");
    }
    if(n>79 && n<90){
        printf("very good");
    }
    if(n>69 &&n<80){
        printf("good");
    }
    if(n>59 &&n<70){
        printf("can do better");
    }
    if(n>49 &&n<60){
        printf("avarage");
    }
    if(n>39 &&n<=50){
        printf("bellow avarage");
    }
    if(n<40){
        printf("fail");
    }
    return 0;
}

//output-
//Enter the marks= 95
//Excellent