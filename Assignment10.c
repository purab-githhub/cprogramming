/*Write a program in C to simulate a simple calculator that performs basic arithmetic operations such as addition, subtraction, multiplication, and division.
 The calculator should also perform special operations like computing xʸ (power) and x! (factorial*/


#include <stdio.h>
void main(){
    int choice;
    float a , b;
    float output;
    int j;
    int i;
    float power=1;
    long int fact = 1;
    printf("//MENU//");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Division\n");
    printf("4.ComputingPower\n");
    printf("5.Factorial\n");
    printf("Enter the users choice:");
    scanf("%d",&choice);
    switch (choice){
        case 1: 
        printf("enter the two numbers:");
        scanf("%f %f",&a ,&b);
        output = a+b;
        printf("Result:%f",output);
        break;
        case 2:
        printf("enter the two numbers:");
        scanf("%f %f",&a ,&b);
        output = a-b;
        printf("Result:%f",output);
        break;
        case 3:
        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);
        output = a*b;
        printf("Result:%f",output);
        break;
        case 4:
        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);

        if(b == 0)
        printf("Cannot divide by zero");
        else
        {
            output = a / b;
                  printf("Result:%f",output);
        }
        break;
        case 5:
        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);
        for(j=1;j<=b;j++){
            power=power*a;
        }
        printf("computingpower:%f",power);
        break;
        case 6:
        printf("enter a number:");
        scanf("%f",&a);
        for (i=1;i<=a;i++){
            fact=fact*i;
        }
        printf("factorial is:%ld",fact);
        break;
    }
        
        
        

    }
