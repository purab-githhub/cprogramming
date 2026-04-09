#include <stdio.h>

int main()
{
    int num;
    int rem = 0;
    int digit;

    printf("Enter number: ");
    scanf("%d", &num);

    while(num > 0)
    {
        digit = num % 10;
        rem = rem * 10 + digit;
        num = num / 10;
    }

    printf("Reverse = %d", rem);

    return 0;
}