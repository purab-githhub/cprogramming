#include <stdio.h>

int main() {
    int num, i;
    int isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // a) Square root (manual approximation)
    float sqrt = 0;
    if (num >= 0) {
        for (float j = 0; j * j <= num; j += 0.001) {
            sqrt = j;
        }
        printf("Square root: %.3f\n", sqrt);
    } else {
        printf("Square root not defined for negative numbers\n");
    }

    // b) Square
    printf("Square: %d\n", num * num);

    // c) Cube
    printf("Cube: %d\n", num * num * num);

    // d) Check Prime
    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("The number is Prime\n");
    else
        printf("The number is Not Prime\n");

    // e) Factorial
    long long fact = 1;
    if (num < 0) {
        printf("Factorial not defined for negative numbers\n");
    } else {
        for (i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("Factorial: %lld\n", fact);
    }

    // f) Prime Factors
    printf("Prime Factors: ");
    int temp = num;

    for (i = 2; i <= temp; i++) {
        while (temp % i == 0) {
            printf("%d ", i);
            temp /= i;
        }
    }

    return 0;
}