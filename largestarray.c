#include <stdio.h>
void largest(int arry[],int num);
void main (){
    //idhar tho hum arry ko pass karenge na to function tho array dalteh han
    int arry[5] , i;
    //array size already defined hain 5 aap chahe tho num bhi dal sakteh ho
    //braccket mein 
    printf("enter the array elements:");
    for (i=0;i<5;i++){
        scanf("%d",&arry[i]);
        
    }
    //abhh kya hain for loop ek ek karke value lega aur arr[i] mein 
    //dalega 
    //pass kardo array ko to function 
    //call karo funtion 
    //arguments pass kardo parameters ko 
    largest(arry,5);
}
void largest(int arry[],int num){
    int i;
    int larg;//hamnein ek variable le liya jiss ke saath hum khelna hateh hain 
    /*abh shuru mein hum ko largest pata nahi na largest kya hain 5 element mein 
    tho ek karke check karenge na largest among 5
    1.largest ko assign karenge hum first index jise shuru mein compare tho kar sakeh 
    2.phir for loop laga ke arry[i]> larg check karteh rehnge aur larg ko update karteh 
    rahenge*/
    larg=arry[0];//dediya first element
    //abh lagega for loop eacch an every elemt ko access karna hain na 
    for (i=0;i<num;i++){
        //if lagage ke every element ko larg se compare karteh hain 
        if (arry[i]>larg){
            //agar koi bada aaega tho update karna hain na value larg ki 
            larg=arry[i];
        }
    }
    printf("the largest element:%d",larg );
}