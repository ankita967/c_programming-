// if a cost price and selling price of an item is input through the keyboard write a program to 
// determine whether the seller has made profit or incurred loss

#include<stdio.h>
int main()
{
    int cp,sp;
    printf("Enter the cost price= ");
    scanf("%d",&cp);
    printf("Enter the selling price= ");
    scanf("%d",&sp);
    if(sp==cp){
        printf("No profit no loss");
    }
    if(cp<sp){
        printf("profit");
    }
    if(cp>sp){
        printf("Loss");
    }
    return 0;
}

//output-
//Enter the cost price= 100
//Enter the selling price= 110
//profit