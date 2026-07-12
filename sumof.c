#include <stdio.h>
//program hain execcutive approach se sum of n natural numbers nikal na hain 
//declare karenge function ko 
void sumofn(int n);

void main(){
    //yaha pe hum kya karte thein input lete thein aur function ko ccall karke input bhejte thein 
    int n;
    printf("enter the number for the calcculation of first n natural numbers:");
    scanf("%d",&n);

    //function calling

    sumofn(n);// n jo liya tha vohh bhej raha hu function ko 

}

//function define karenge iss mein kya aata hain  calculation part na 
//formula dalenge sum mein
void sumofn(int n){
    int sum;
    //sum intialized kardiay meine
    sum= (n*(n+1))/2;
    //bass print karwa denge
    printf("%d...%d",n,sum);
}