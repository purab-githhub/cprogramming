#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
    int random_num=0;
    int user_guessing;
    int maxium_guessess=5;
    time_t t;
    //intialisation of random number
    srand((unsigned)time(&t));//har baar ek naya number generate karna hai

    //now i have to get each time that random number 
    random_num=rand()%21; // 21 se divide hooke haar baar number 1 se 20 ke beech mein he aae

    //zarurat nahi hai baas aise he heading daal raha hu 
    printf("\n This Is A Number Guessing Game");
  
    for(maxium_guessess=5;maxium_guessess>0;maxium_guessess--){
        //now everytime the user will play i want to let him know howm many tries is left after each iteration
        printf("user is left with %d   tr%s",maxium_guessess,maxium_guessess==1? "y"  : "ies");
        //for loop ke andar aaega user ka number beacuse for eacch iteration we need to have wht user is giving the number to be gussed
        printf("enter the number");
        scanf("%d",user_guessing);
        if(user_guessing==random_num){
            printf("\nCongratulations you have giessed it correct");
        }else if (user_guessing<0||user_guessing>

    return 0;

}