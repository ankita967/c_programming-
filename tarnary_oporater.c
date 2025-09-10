//write a c program using tarnary oporater find the largest number among three 

#include <stdio.h>

int main() {
    int a, b, c, max;

    printf("Enter the three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("The maximum number is %d\n", max);

    return 0;
}

//output-
//Enter the three numbers:
//12
//11
//7
//The maximum number is 12