/*Write a program in C to generate multiplication tables for a given number.*/
#include <stdio.h>

void main() {

    // taking the number to have the multiplication table
    int i = 5;

    // an incrementing counter variable
    int prdt = 1;

    for (prdt = 0; prdt <= 12; prdt++) {

        // having the statement to print multiplication table
        printf("%d x %d = %d\n", i, prdt, i * prdt);

    }
}
