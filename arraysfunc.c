#include <stdio.h>
//jab bhi aap yeh array karne jaogeh na tho baas delaring karo array and size

void ary(int arry[], int num);
void main (){

    int arry[] = {25,47,57,55,59};
    /*normal array ka program jaise likhte hain na voh likhdo yaha 
    pe meine 5 elements daal diya aap chahe tho baas for loop use karlo sirf 
    array elemnts lene ke liye*/


    // call karlo abh function ko 
    ary(arry,5);
}
void ary(int arry[], int num){
    //defination mein printing yah normal functioon ke delaration statements likhte hain 
    int i;
    for (i=0;i<num;i++){
        printf("%d\t",arry[i]);
    }
}