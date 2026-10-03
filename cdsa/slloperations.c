#include <stdio.h>
#include <stdlib.h>
#include <string.h>




struct node
{
    int regno;
    char name[10];
    struct node *next;
};

/*creation of single linked list*/
void create(struct node **H)
{
    struct node *temp, *curr;
    char choice;
    temp=H;

    //now we have to repeat it until choice y
    //we need do while loop
    do
    {
        //allocate memory to curr
        //we have to use malloc over here for memory allocation
        curr=(struct node *)malloc(sizeof(struct node));

        //now we have to accept the data to the current
        printf("enter the registration no:");
        scanf("%d",&curr->regno);

        printf("enter name:");
        scanf("%s",curr->name);

        curr->next=NULL;
        temp->next=curr;
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
        curr=H->next;

        //to continue printing we have to check the curr if not being null
        //and to get each element or node
        while(curr!=NULL)
        {
            printf("registration number is %d",curr->regno);
            printf("name of the student is %s",curr->name);
            printf("next node points to %p",(void *)curr->next);
            curr=curr->next;
        }
    }
}

int main()
{
    struct node *head;
    int choice;

    head=(struct node *)malloc(sizeof(struct node));
    head->next=NULL;

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
    }

    free(head);
    return 0;
}