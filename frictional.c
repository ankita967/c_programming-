//take float input and print the frictional part of the real number

#include<stdio.h>
#include<math.h>
int main()
{
    float num;
    printf("Enter a floating point number= ");
    scanf("%f",&num);
    
    int integerpart=(int)num;
    float frictionalpart= num-integerpart;
    
    if (frictionalpart<0){
    frictionalpart*=-1;
    }
    printf("Frictional part of the integer number = %0.6f\n",frictionalpart);
    return 0;
}

//output-
//Enter a floating point number= -12.78654
//Frictional part of the integer number = 0.786540