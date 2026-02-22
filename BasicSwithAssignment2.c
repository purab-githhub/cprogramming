#include <stdio.h>

void main()
{
    int num1, num2, choice;
    float result;

    // Menu
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    // Choice input
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Number input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Switch case
    switch(choice)
    {
        case 1:
            result = num1 + num2;
            printf("Result = %f", result);
            break;

        case 2:
            result = num1 - num2;
            printf("Result = %f", result);
            break;

        case 3:
            result = num1 * num2;
            printf("Result = %f", result);
            break;

        case 4:
            if (num2==0){
printf("division is by zero");
}else{
result =num1/num2;
printf("Result:%f",result);
}
break;
}
}