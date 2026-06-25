#include <stdio.h>
void reverse(int arry[],int num);
void main (){
    int arry[5],i;
    printf("enter the array elements:");
    for (i=0;i<5;i++){
        scanf("%d",arry[i]);
    }
    //array elements lega abb bass function ko call karna hain
    reverse(arry,5);
}
void reverse(int arry[5],int num){
    int i,rev;
    //ek variable lunga joo store karega mera pehla value 
    /*like for loop lagaunga na tho uss mein arry 0 pehla element mein rev mein dunga
    phir a[0]khali hoojaega na rev kka formula use karke a[0]ko mein 
    last ka value dedunga
    phir rev ka element mein rev ke formula ko dedunga 
    rev khali hoojaega 
    pir second aur second last element ko bhi aise swap karunga 
    middle ko swap karne ka hance he nahi banta tho mera loop iteration hain 
    na num/2 takh he hal raha hain */
    for (i=0;i<num/2;i++){
        rev=arry[i];
        arry[i]=arry[num-1-i];
        arry[num-1-i]=rev;
    }
    //abh bass print kara dunga 
    printf("printing reversed array elements:");
    for (i=0;i<num;i++){
        printf("%d\t",arry[i]);
    }
}