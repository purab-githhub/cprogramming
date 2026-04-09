#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, sign = 1;
    float x, sum = 0;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        int fact = 1, j;
        int power = 2*i - 1;

        for(j = 1; j <= power; j++)
        {
            fact = fact * j;   // factorial
        }

        sum = sum + sign * pow(x, power) / fact;
        sign = -sign;
    }

    printf("Sum of sine series = %f", sum);

    return 0;
}