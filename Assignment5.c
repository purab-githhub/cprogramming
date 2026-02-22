#include <stdio.h>

int main()
{
    int s1, s2, s3, s4, s5;
    float percent;

    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    // Check pass condition
    if (s1 >= 40 && s2 >= 40 && s3 >= 40 && s4 >= 40 && s5 >= 40)
    {
        percent = ((s1 + s2 + s3 + s4 + s5) / 500.0) * 100;

        printf("Result: PASS\n");
        printf("Percentage = %f%%\n", percent);

        // Grade calculation
        if (percent >= 75)
        {
            printf("Grade: Distinction\n");
        }
        else if (percent >= 60 && percent < 75)
        {
            printf("Grade: First Division\n");
        }
        else if (percent >= 50 && percent < 60)
        {
            printf("Grade: Second Division\n");
        }
        else if (percent >= 40 && percent < 50)
        {
            printf("Grade: Third Division\n");
        }
    }
    else
    {
        printf("Result: FAIL\n");
    }

    return 0;
}
