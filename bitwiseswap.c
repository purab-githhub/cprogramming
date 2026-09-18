#include <stdio.h>
void main (){
    //bhai pehle tho two numbers lele thein hain 
    int a= 10;
    int b=20;
    //xor bitwise operator ka use krna hain (^)
    //pehle tho store karenge xor ke result ko in a 
    a= a^b;//yaha pe kya hoga 10^20 hoga aur result hoga 30
    
    //abh hum b mein karenge store a xor b 
    b=a^b; //idhar kya hoga 30^20 hoga aur iska result 10 b mein store hoojaega

    //abh kya karenge hum a mein a xor b karenge aur result a mein store karenge
    a=a^b;// 30^10 ka result 20 store hoojaega in a 

    //print karadenge
    printf("%d %d",a,b);
    
}