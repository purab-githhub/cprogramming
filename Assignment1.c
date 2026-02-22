/*qrite a program in c to check the given year is a leap year or not */
#include <stdio.h>

void main() {

    // declaring the variable to store the input (year)
    int year;

    printf("Enter the year to be checked");

    // we want the input from the user during the runtime
    scanf("%d", &year);

    /*
      A year is a leap year if it is divisible by 400, OR
      A year is a leap year if it is divisible by 4 but not divisible by 100.
    */

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("Is a leap year");
    } else {
        printf("Is not a leap year");
    }
}
