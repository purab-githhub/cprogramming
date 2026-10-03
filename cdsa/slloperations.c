#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//in a node it has twoo things one is the data and other one is 
//the linking system 
struct node
{
    int regno;
    char name[10];
    struct node *next;
};

/*creation of single linked list*/
void create(struct node *H)
{
    struct node *temp, *curr;
    char choice;
    temp=H;/*temp we assign to head couz we can link the node to the next node
    */

    //now we have to repeat it until choice y
    //we need do while loop
    do
    {
        //allocate memory to curr
        //dynamically allocation is done through malloc 
        //we have to use malloc over here for memory allocation
        
        
        curr=(struct node *)malloc(sizeof(struct node));
        
        
        //surr will be the next node in the linked list
        //give me some enough memory to store struct node,

        //now we have to accept the data to the current
        printf("enter the registration no:");

        //we are entering the node values
        scanf("%d",&curr->regno);

        printf("enter name:");
        scanf("%s",curr->name);

        
        curr->next=NULL;//the last successor//acting as head->next = null
       
        //temp is linked means header is linked to the first newnode 
        //then temp == curr then first node to second new node is linked
        temp->next=curr;
         /*means after the new node is added the temp should go
        to that new node couz if another new node is added we to
        link it with the previous new node*/
        temp=curr;

        //read choice
        printf("if u want to add one more student :");
        scanf(" %c",&choice);
    }
    while(choice=='y');
}

/*now list display function*/
void display(struct node *H)
{
    struct node *curr;

    //if H->next == null checking
    if(H->next == NULL) //for the list empty checking
    {
        printf("the list is empty");
    }
    else
    {
        //for the head node values
        curr=H->next;//from here start the perfect linked list to set the elements

        //to continue printing we have to check the curr if not being null
        //and to get each element or node
        while(curr!=NULL)//this moves to the end of the linked list
        //it keeps on printing the nodes if its present once the 
        //the current is null stop 
        {
            printf("registration number is %d",curr->regno);
            printf("name of the student is %s",curr->name);
            printf("next node points to %p",(void *)curr->next);
            curr=curr->next;
        }
    }
}

//finding the length of the list

void lenlist(struct node *H){
    struct node *curr;
    //suppose lets thik 
    /*head->101->102->103->null*/
    /*you just need to count 101 102 103 total len is 3
    right 
    for counting you know that temp is the node which is the 
    list and curr is for the futre linked list or something
    i can say is next node 
    so on which variable we must count the linked list 
    obviously curr as it is will help to check to things firstly 
    the null of the list 
    and also idd student is there it will count */
    int i=0;
    //why one step of the head couz we dont want the head to be 
    //counted as it is null
    curr=H->next;
    //on what condition must be the loop will worrk 
    //unitl the node is null right 
    while (curr!=NULL){
        i++;
        //move to the next node
        curr=curr->next;
    }
    printf("the node are :%d",i);

}

int main()
{
    struct node *head;
    int choice;

    head=(struct node *)malloc(sizeof(struct node));
    head->next=NULL;
    //node size memory area for the header
    do{
    printf("enter the choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            create(head);
            break;

        case 2:
            display(head);
            break;
        case 3:
            lenlist(head);
    }
    }while(choice!=3);
    free(head);
    return 0;
}
