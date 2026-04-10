#include <stdio.h>

// without pointer (call by value)
void swap_value(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("After swap (without pointer): %d %d\n", a, b);
}

// with pointer (call by reference)
void swap_pointer(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    swap_value(x, y);
    printf("Original values after call by value: %d %d\n", x, y);

    swap_pointer(&x, &y);
    printf("After swap (with pointer): %d %d\n", x, y);

    return 0;
}