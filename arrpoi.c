#include <stdio.h>
void main (){
    int arr[5]={10,20,30,40,50};
    //pura arr apne pointer vale variable ko pass on kardiya 

    int* ptr = arr;
    //abh mere ko memory pass on karna hain ptr ko 
    //aur ek ek karke print bhi karwana hain 
    //for loop ka ista maal karteh hain 
    /*abb suppose 1000 is arr[0] ka address
    &arr[o] pass kiya mein to ptr variable 
    then &arr[1] jaega na tho ussko access karne ke liye we 
    need to print ptr+1 jisse cohh 1004 vale address ko acc
    access kare 
    */
   int i;
   for (i=0;i<5;i++){
    printf("%p", ptr+i);
   }

}