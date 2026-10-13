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
            printf("name of the student is %s\n",curr->name);
            printf("next node points to %p\n",(void *)curr->next);
            printf("\n");
            curr=curr->next;
        }
    }
}

//finding the length of the list

int lenlist(struct node *H){
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
    return i;

}

//lets add a new node
void newnode(struct node *H){
    //we need a creation of new node
    struct node *nnode;
    struct node *curr;
    //now we have to insert it somewhere we need to have position 
    int pos;
    int i=1;//couz i have to start from the very first node
    //intialize curr
    curr =H->next;
    int k;
    k=lenlist(H);
    //lets get the position and the new node
      nnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the new node regno:");
    scanf("%d",&nnode->regno);
    printf("enter the new node student name :");
    scanf("%s",nnode->name);
    printf("enter the position:");
    scanf("%d",&pos);

    if(pos>k+1){
        //if the pos i entered is more then the linked list
        //it will not work 
        printf("data cant be inserted");
    }else{
        while(curr!=NULL && i<pos){
            i++; //i was having the first node
            //then it updates to 2
            curr = curr->next ;//the A next will have the address of 
            //the node B

        }
        nnode->next=curr->next;//now will point to B
        curr->next=nnode;//a of next will point to address of new node

    }

}
//deletion of the node
void delnode(struct node *H){
    struct node *curr;
    struct node *prev;
    //need prev to point the head
    prev=H;
    //need one variable which help to free the element from the memory
    struct node *del;
    int ctr=1;//control or tracking of the node
    int pos;
    printf("enter the position to delete:");
    scanf("%d",&pos);
    
    //to take the input of the pos to delete the node
    int k;//to get the len of the linked list
    k=lenlist(H);
    curr=H->next;
    if(pos<1||k<pos)
    {
        printf("Data can't be deleted");
    }
    else{
        //nedd a while loop you must be thinking what must be the 
        //condition ctr is juct for tracking the node
        //so pos must be grater than the pos and 
        //obviously the curr must not be null
        while (ctr<pos && curr!=NULL){
            ctr++;
            //prev points to curr
            //curr increments
            prev=curr;
            curr=curr->next;

        }//if the condition dosent match then
        //we have reached to the appropiate place 
        //now take the node to the temporary variable
        del=curr;
        //point the prev next to the curr next address
        prev->next=curr->next;
        //curr-next to the null
        curr->next=NULL;
        free(del);
    }

    }
//reversing the linked list now
void rev(struct node *H){
    //we need three pointers over here
    struct node *curr,*prev,*future;
    prev=NULL;
    //we will try to link the next of the curr node to prev just to change the train
    curr=H->next;
    //as usual current holding to the nexxt of the head 
    while(curr!=NULL){
        future=curr->next;
        curr->next=prev;
        //now the curr next will point to null//101 to null
        prev=curr;
        //prev will go the curr to the same linking 
        //tail to head linking
        curr=future;
    }
    //now change the whole narrative
    //tail to head
    //make the prev which hold the last node and attach to head 
    H->next=prev;

}

//sorting the linked list
void sort(struct node *H)
{
    struct node *prev;
    struct node *curr;
    struct node *temp;

    int len;
    int i,j;

    len=lenlist(H);

    for(i=1;i<len;i++)
    {
        prev=H;
        curr=H->next;

        for(j=0;j<i;j++)
        {
            temp=curr->next;

            if(curr->regno > temp->regno)
            {
                prev->next=temp;
                curr->next=temp->next;
                temp->next=curr;
                prev=temp;
            }
            else
            {
                prev=curr;
                curr=curr->next;
            }
        }
    }
}


int main()
{
    struct node *head;
    int choice;

    head=(struct node *)malloc(sizeof(struct node));
    head->next=NULL;
    //node size memory area for the header
    do{
        printf("menu\n");
        printf("1.create\n");
        printf("2.display\n");
        printf("3.len\n");
        printf("4.insert\n");
        printf("5.del\n");
        printf("6.rev\n");
        printf("7.sort\n");

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
           printf("Length of linked list = %d\n",lenlist(head));
            break;
        case 4:
            newnode(head);
            display(head);
            break;
        case 5:
            delnode(head);
            display(head);
            break;
        case 6:
            rev(head);
            display(head);
            break;
        case 7:
            sort(head);
            printf("Linked list sorted successfully\n");
            display(head);
            break;

        case 8:
        printf("Exiting...\n");
        break;
    }
    }while(choice!=8);
    free(head);
    return 0;
}
