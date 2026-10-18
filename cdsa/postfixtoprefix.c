
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define max 100

char stack[max][max];
int top = -1;

// Check whether stack is full
int isFull()
{
    if(top == max - 1)
        return 1;
    else
        return 0;
}

// Check whether stack is empty
int isEmpty()
{
    if(top == -1)
        return 1;
    else
        return 0;
}

// Push a string onto the stack
void push(char item[])
{
    if(!isFull())
    {
        top = top + 1;
        strcpy(stack[top], item);
    }
}

// Pop a string from the stack
void pop(char item[])
{
    if(!isEmpty())
    {
        strcpy(item, stack[top]);
        top = top - 1;
    }
}

// Convert postfix to prefix
void posprefix(char postfix[])
{
    int len = strlen(postfix);
    int i;

    char op1[max];
    char op2[max];
    char prefix[max];

    top = -1;

    char x;

    for(i = 0; i < len; i++)
    {
        x = postfix[i];

        // If x is an operand
        if(isalnum((unsigned char)x))
        {
            char operand[2];

            operand[0] = x;
            operand[1] = '\0';

            push(operand);
        }
        else
        {
            // Pop the two operands
            pop(op2);
            pop(op1);

            // Construct prefix: operator + op1 + op2
            prefix[0] = '\0';

            char operator[2];
            operator[0] = x;
            operator[1] = '\0';

            strcat(prefix, operator);
            strcat(prefix, op1);
            strcat(prefix, op2);

            // Push the new expression
            push(prefix);
        }
    }

    pop(prefix);

    printf("Prefix expression = %s\n", prefix);
}

int main()
{
    char postfix[max];

    printf("Enter the postfix expression: ");
    scanf("%99s", postfix);

    posprefix(postfix);

    return 0;
}
