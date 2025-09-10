//write a program to print all the value and their equovalent charecter of 26b alphabet using while loop


#include<stdio.h>
int main()
{
    int i;
    for(i=65;i<=90;i++){
        char ch=(char)i;
        printf("%c ->",ch);
        printf("%d ",i);
    }
    return 0;
}


//output-
//A ->65 B ->66 C ->67 D ->68 E ->69 F ->70 G ->71 H ->72 I ->73 J ->74 K ->75 
//L ->76 M ->77 N ->78 O ->79 P ->80
 //Q ->81 R ->82 S ->83 T ->84 U ->85 V ->86 W ->87 X ->88 Y ->89 Z ->90 