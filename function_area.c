//write a program to calculate area of a circle using function

#include <stdio.h>
float area(float r) {
    return (3.14 * r * r);
}

int main() {
    float areaa, redious;

    printf("Enter the radius of the circle = ");
    scanf("%f", &redious);

    areaa = area(redious);

    printf("Area of the circle is = %.2f\n", areaa);

    return 0;
}
