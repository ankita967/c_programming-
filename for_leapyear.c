//write a c programm using for loop to calculate the leap year between 2000 to 2100

#include<stdio.h>
int main()
{ int year;
    printf("All the leap year between 2000 to 2100:\n");
    for(year=2000;year<=2100;year++){
        if((year%4==0 && year%100!=0)||(year%400==0)){
            printf("%d ",year);
        }
    }
    return 0;
}

//output-
//All the leap year between 2000 to 2100:
//2000 2004 2008 2012 2016 2020 2024 2028 2032 2036 2040 2044 2048
//2052 2056 2060 2064 2068 2072 2076 2080 2084 2088 2092 2096 