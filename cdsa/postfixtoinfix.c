#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define max 100

//create a stack  
char stack[max][max];//we need to do this as wee nedd stak to store multiple values  
 
// i have intialized the top to be -1 
int top=-1;//it just basically index only type thing  
 
 
//lets first check with stact is empty or full  
//lets goo for stack full check  
int isFull(){ 
    //now see for the elements to get at the top it will goo to the max of the stack size -1 
    if(top==max-1) 
        return 1;//true  
    else 
        return 0;//false 
     
} 
 
//now we have to check for stack for empty check 
 
int isEmpty(){ 
    //is empty means my poiinter must be at least box at the bottom  
    if(top==-1) 
        return 1; 
    else 
        return 0; 
 
} 
 
 
//now lets push the things into the stack for that we need a function  
void push(char item[]){ //beacuse we are psuhing A B (b+c) (A*(B+C))
    //i have to store items into the stack  
    //condition over here to check is that stack is not full right  
 
    if (!isFull()){ 
        //if its not empty now what we will doo  
        //add/push the element  
        //first we have to bring index to 0 top to 0 then keep on undating it as we pushing  
        top=top+1; 
        //now we are cpoying an whole expression right
        strcpy(stack[top],item);
    } 
} 
 
//now lets create a function for the poping for the stack 
 
void pop(char item[]){ 
    //we will pop the item from the top of the stack  
    //condition to be checked here is is full right empty shouldnt be there 
 
    if (!isEmpty()){ 
        strcpy(item,stack[top]);
        top=top-1; 
       
    } 
    
} 

//lets write the postfix to infix expression
void posinfix(char postfix[]){
    int len=strlen(postfix);
    //we need for loop to get each an everything from the postfix
    int i;
    char op2[max];
    char op1[max];
    char infix[max];
    top=-1;
    
    //now we have to keep on checking its an operatore or operanad
    char x;
        for(i=0;i<len;i++){
        x=postfix[i];//basically it stores the current symbol
        //check if it ann operand
        if(isalnum(x)){//check that the current symbol is an alphabet or a number
            //now we will get the character type thing from x
            //we need as a string 
            //so we need to manupilate 
            char operand[2];
            operand[0]=x;
            operand[1]='\0';//just to terminate the string
            //now the strng is created so push 
            push(operand);


        }
        else //is it is not alphabet or a number its an operator

        {
            //what we do in postfix to infix is operator is there
            //we pop the twoo values
            pop(op2);
            pop(op1);
            //poping of two values is done now we have to mmake a new expression 
            infix[0]='\0';//this is an empty strring 
            strcat(infix,"(");
            strcat(infix,op1);
            //then again create a string
            char operator[2];
            operator[0]=x;
            operator[1]='\0';
            strcat(infix,operator);
            strcat(infix,op2);
            strcat(infix,")");
            push(infix);
        }
        }
        pop(infix);
        printf("infix expression=%s",infix);
}
void main (){
    char postfix[max];
    printf("enter the expression:");
    scanf("%s",postfix);
    posinfix(postfix);
}