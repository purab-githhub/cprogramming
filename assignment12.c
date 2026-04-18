
#include <stdio.h>

int main()
{
    int scd = 0, gcd = 1;
    int num1, num2, i;

    printf("Enter the numbers: ");
    scanf("%d %d", &num1, &num2);

    for(i = 1; i <= num1 && i <= num2; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }

    for(i = 2; i <= num1 && i <= num2; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            scd = i;
            break;
        }
    }

    printf("Greatest Common Divisor: %d\n", gcd);

    if(scd != 0)
        printf("Smallest Common Divisor: %d", scd);
    else
        printf("No common divisor except 1");

    return 0;
}