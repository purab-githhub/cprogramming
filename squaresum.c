#include <stdio.h>
//normal sa ek program likhna hain 
//program hain for the sum of square of first n natural numbers

void squareofn(int num);

void main(){
    //normallly yaha pe hum user se n natural numbers ka sun karn hain na tho yaha mein 
    //n input lunga user se
    int num;
    printf("enter the number : ");
    scanf ("%d",&num);

    //abh baaas function ko call karke num ko funtion ko bhejna hain
    squareofn(num);

}

//function defination aaege jaha pe 
//hum sum ko apna formula dedenge
void squareofn(int num){
    int sum;
    //sum ke andar formula daaldo 
    sum= (num*((num+1)*(2*num+1)))/6;

    //abh baas print karadunga
    printf("%d",sum);

}
