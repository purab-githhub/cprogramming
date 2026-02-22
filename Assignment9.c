#include <stdio.h>

int main()
{
    int num, original, number;
    int remainder = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // While loop to extract digits
    while(num != 0)
    {
        number = num % 10;              // Extract last digit
        remainder = remainder + (number * number * number);  // Cube and add
        num = num / 10;                 // Remove last digit
    }

    // Check Armstrong
    if(remainder == original)
        printf("%d is an Armstrong number", original);
    else
        printf("%d is not an Armstrong number", original);

    return 0;
}
