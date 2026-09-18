#include <stdio.h>      // For input and output functions
#include <stdlib.h>     // For rand() and srand()
#include <time.h>       // For time() function

int main()
{
    int user, computer;        // Variables to store choices   user input what he/she will take computer input what algorithim will choose after the user input
    int round = 1;             // Round counter  we need a round tracking variable to get to known which round is to be displayed or played
    int userScore = 0;         // User score     to store who won the round if its user
    int compScore = 0;         // Computer score   or if its computer 

    // Array to store choice names
    char *choices[] = {
        "Rock",
        "Paper",
        "Scissors"
    };   //made an array to input rock scissors and stone these are the three strings also act as a pointer 

    // Seed for random number generation
    srand(time(0));

    printf("=== Rock Paper Scissors Game ===\n");
    printf("0 = Rock | 1 = Paper | 2 = Scissors\n");  //this will help the user to use int 0 1 2 to input to recognise it as his/her actions to play

    // While loop to run 5 rounds
    while (round <= 5)   // while loop is used couz i want the game to be played minimum of five rounds so it will help me to execute the game for five rounds 
    {
        printf("\nRound %d\n", round);

        // Take user input
        printf("Enter your choice: ");   //this will ask the user to enter the choice 
        // Input validation
        if(scanf("%d", &user) != 1)
        {
            printf("Invalid input! Enter 0, 1, or 2 only.\n");
            while(getchar() != '\n');  // clear buffer
            continue;
        }

        if(user < 0 || user > 2)
        {
            printf("Invalid choice! Enter 0, 1, or 2 only.\n");
            continue;
        }

        // Generate computer choice (0–2)
        computer = rand() % 3;   /* rand % will help the computer input to get random choice to perform the game i have used here the (%3) because after division by 3 
        remainder can only be 0,1,2 and we want these only*/

        // Display choices
        printf("You chose: %s\n", choices[user]);  // choice[user] this will access the user inputed choice eg if user gave choice 1 then the address which 1 hold is "paper"
        printf("Computer chose: %s\n", choices[computer]); // same as that with computer 

        // Check result using if-else
        if (user == computer)
        {
            printf("Draw!\n");
        }
        else if ((user == 0 && computer == 2) ||   // Rock beats Scissors
                 (user == 1 && computer == 0) ||   // Paper beats Rock
                 (user == 2 && computer == 1))     // Scissors beats Paper
        {
            printf("You Win this round!\n");
            userScore++;      // Increase user score incrementing operation for the user if won
        }
        else
        {
            printf("Computer Wins this round!\n");
            compScore++;      // Increase computer score   incrementing operator if the compiter won
        }

        round++;   // Move to next round   abb now we have to goo to the second round tho round plus plus
    }

    // Display final scores
    printf("\n=== Final Result ===\n");
    printf("Your Score = %d\n", userScore);
    printf("Computer Score = %d\n", compScore);

    // Decide overall winner
    if (userScore > compScore)
    {
        printf("You Won the Game!\n");
    }
    else if (compScore > userScore)
    {
        printf("Computer Won the Game!\n");
    }
    else
    {
        printf("Game Draw!\n");
    }

    return 0;   // End of program
}