#include <stdio.h>
void main (){
    int num ,i;
    printf("enter the array size number:");
    scanf("%d",&num);
    int a[num];
    printf("enter %d numbers:",num);
    for (i=0;i<num;i++){
        scanf("%d",&a[i]);
    }
    printf("Even numbers:");
    for(i=0;i<num;i++){
        if(a[i]%2==0){
            printf("%d ",a[i]);
        }
        
    }
    printf("Odd numbers:");
    for(i=0;i<num;i++){
        if(a[i]%2!=0){
            printf("%d ",a[i]);
        }

    }
}