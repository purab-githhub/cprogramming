
#include <stdio.h>
#include <string.h>

void main()
{
    char first[50], second[50], reverse[50];

    printf("Enter a string: ");
    scanf("%s", first);

    printf("Length = %d\n", strlen(first));

    strcpy(reverse, first);
    strrev(reverse);

    printf("Reverse String = %s\n", reverse);

    printf("Enter second string: ");
    scanf("%s", second);

    if(strcmp(first, second) == 0)
        printf("Both strings are equal\n");
    else
        printf("Both strings are not equal\n");

    if(strcmp(first, reverse) == 0)
        printf("Palindrome String\n");
    else
        printf("Not a Palindrome String\n");
}
