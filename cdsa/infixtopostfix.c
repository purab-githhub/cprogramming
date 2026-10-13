#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define max 100

//create a stack 
char stack[max];

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
void push(char item){
    //i have to store items into the stack 
    //condition over here to check is that stack is not full right 

    if (!isFull()){
        //if its not empty now what we will doo 
        //add/push the element 
        //first we have to bring index to 0 top to 0 then keep on undating it as we pushing 
        top=top+1;
        stack[top]=item;
    }
}

//now lets create a function for the poping for the stack

char pop(){
    //we will pop the item from the top of the stack 
    //condition to be checked here is is full right empty shouldnt be there

    if (!isEmpty()){
        char temp=stack[top];
        top=top-1;
        return temp;
    }
    return'\0';
}

// lets start wwith infix to postfix conversion 
//prorities set operatore precedence
int icp (char ch)
{
    if(ch=='+' || ch=='-')
    return 1;
    if(ch=='*' || ch=='/')
    return 2;
    if(ch=='^')
    return 4;
    if(ch=='(')
    return 5;
    else
    return 0;
}

int isp(char ch)
{
 if(ch=='+' || ch=='-')
 return 1;
 if(ch=='*' || ch=='/')
 return 2;
 if(ch=='^')
 return 3;
 else
 return 0;
}

void inpost(char inexp[]){
    //for stackking pointer we need one varaible 
    int k=0;
    char postexp[20];
    //for the expression we need a pointer i
    int i=0;
    char tkn;//we need to get the symbol from the expression 
    top =-1;
    //lets get the symbol each operoter or operand
    tkn= inexp[i];
    //nw lets ccheck for rules which was discussed
    while (tkn != '\0')
    {
        if (isalnum(tkn))
        {
            postexp[k] = tkn;
            k++;
        }
        else if (tkn == '(')
        {
            push(tkn);
        }
        else if (tkn == ')')
        {
            while ((tkn = pop()) != '(')
            {
                postexp[k] = tkn;
                k++;
            }
        }
        else
        {
            while (!isEmpty() && isp(stack[top]) >= icp(tkn))
            {
                postexp[k] = pop();
                k++;
            }

            push(tkn);
        }

        i++;
        tkn = inexp[i];
    }

    while (!isEmpty())
    {
        postexp[k] = pop();
        k++;
    }

    postexp[k] = '\0';
     printf("Postfix expression: %s\n", postexp);
}

void main (){
    char inexp[20];
       printf("Enter infix expression: ");
        scanf("%s", inexp);

        inpost(inexp);

}
   