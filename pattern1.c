#include <stdio.h>
void main(){
    int i , j;
    for (i=3;i>=1;i--){
        for (j=3;j>=1;j--){
            printf("%d",i*j);
        }
        printf("\n");
    }
}