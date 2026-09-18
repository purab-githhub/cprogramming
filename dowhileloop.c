/*to generate a multiplication table using do whileloop */
#include <stdio.h>
int main(){
    int prdt=1,num;
    printf("enter users choice:");
    scanf("%d",&num);
    do
    {
        printf("%d*%d",num,prdt,num*prdt);
        prdt++;
    } while (prdt<=12);
    return 0;
}