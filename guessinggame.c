#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int random_num=0;
    int user_guessing;
    int maxium_guessess=5;
    time_t t;

    //intialisation of random number
    srand((unsigned)time(&t)); //har baar ek naya number generate karna hai

    //now i have to get each time that random number 
    random_num = rand()%21; // 21 se divide hooke haar baar number 0 se 20 ke beech mein he aae

    //zarurat nahi hai baas aise he heading daal raha hu 
    printf("\n This Is A Number Guessing Game\n");
  
    for(maxium_guessess=5; maxium_guessess>0; maxium_guessess--){
        //now everytime the user will play i want to let him know howm many tries is left after each iteration
        printf("user is left with %d tr%s\n",
               maxium_guessess,
               maxium_guessess==1? "y" : "ies");

        //for loop ke andar aaega user ka number beacuse for eacch iteration we need to have wht user is giving the number to be gussed
        printf("enter the number: ");
        scanf("%d",&user_guessing);

        if(user_guessing==random_num){
            printf("\nCongratulations you have guessed it correct\n");
            break;
        }
        else if (user_guessing<0 || user_guessing>20){
            printf("\nuser has inputed a invalid number which is not in 0 to 20 range\n");
        }
        //i want to let user know how close he it to the number for that i need to work on two if else statements
        else if(random_num>user_guessing){
            printf("\nthe random number is greater than your currently inputed number\n");
        }
        else if(random_num<user_guessing){
            printf("\nthe random number is less than that your currently inputed number\n");
        }
    }

    printf("\nYou had five tries but you couldnt able to make it the number was %d\n", random_num);

    return 0;
}
