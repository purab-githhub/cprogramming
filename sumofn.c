#include <stdio.h>
#include <string.h>

void sumofdigits(int num){
    //string conversion ke through karenge 
    //pehle tho string ka space define karenge
    //conversion karenge
    char s[20];//input lelenge in string
    sprintf (s,"%d",num);
    //yeh hoogaya string conversion vala part
    int sum=0;
    //looping karenege in string
    for (int i =0;  i< strlen(s); i++){
        sum = sum+ s[i]- '0';
    }
    printf("%d",sum);
}
    int main () {
        int num;
        printf("enter the number");
        scanf("%d",&num);
        sumofdigits(num);
        return 0;
}
