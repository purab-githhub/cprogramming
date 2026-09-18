#include <stdio.h>

// Function Declaration
void secondLargest(int arr[], int n);

int main()
{
    int arr[5];
    int i;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Function Call
    secondLargest(arr, 5);

    return 0;
}

// Function Definition
void secondLargest(int arr[], int n)
{
    int i;
    int largest, second;

    // Find Largest
    largest = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    // Initialize second
    second = arr[0];

    // Find Second Largest
    for(i = 0; i < n; i++)
    {
        if(arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    printf("Largest = %d\n", largest);
    printf("Second Largest = %d\n", second);
}