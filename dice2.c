#include <stdio.h>
//there is a simple observation 
//tae those opposite faces ka numbers
//sum them up 
//their total will be 7
//4+3 3+4 6+1 1+6 2+5 5+2
// so there is nothing big in this problem 
// take the face of the number n 
//subtract it from 7
//the ans you get is the the opposite face of that number
void  main(){
    int n;
    printf("enter the number on that face:");
    scanf("%d",&n);

    int diff;
    if (n>=1 && n<=6){
        diff = 7-n;
        printf("%d",diff);
    }
    
    else {
        printf("invalid number ");
    }

} 