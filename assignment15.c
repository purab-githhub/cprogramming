#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main (){
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
      srand(time(0));
    for(i=0;i<n,i++)
    {
        printf("%d\n",rand());

    }
    
}