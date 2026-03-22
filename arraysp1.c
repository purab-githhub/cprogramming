#include <stdio.h>
void main(){
    int arrays[10]={0,1,4,9,16,};
    int i ;
    for (i=5;i<10;i++)
    {
        arrays[i]=i*i;

    }
    for (i=0;i<10;i++);
    {
        printf("arrays[%i]=%i\n",i,arrays[i]);
    }
}