#include <stdio.h>

// recursive function
int fact_rec(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return n * fact_rec(n-1);
}

// non-recursive function
int fact_nonrec(int n)
{
    int i, fact = 1;
    for(i=1;i<=n;i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d",&n);

    printf("Factorial (Non-recursion) = %d\n", fact_nonrec(n));
    printf("Factorial (Recursion) = %d\n", fact_rec(n));

    return 0;
}
