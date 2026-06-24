#include <stdio.h>
void fact ();//
void main (){
    fact();
}
void fact(){
    int i,factt;
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    for(i=0;i<5;i++){
        factt=factt*i;
    }
    printf("%d",factt);

}