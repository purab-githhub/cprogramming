#include <stdio.h>
#include <math.h>
void main (){
    int bin , dec=0 , rem , i=0;
    printf("enter the binary number:");
    scanf("%d",&bin);
    while (bin>0){
        rem=bin%10;
        dec += rem*pow(2,i);
        bin = bin/10;
        i++;

    }
    printf("%d",dec);


} 