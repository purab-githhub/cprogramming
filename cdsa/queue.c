// Queue using Structure

#include <stdio.h>
#include <string.h>

#define SIZE 5

// Structure for each job
struct que
{
    int jobid;
    char title[20];
};

// Queue array
struct que q[SIZE];

int front = -1;
int rear = -1;


// Function to check whether queue is full
int isfull()
{
    if(rear == SIZE - 1)
        return 1;
    else
        return 0;
}


// Function to check whether queue is empty
int isempty()
{
    if(front == -1 || front > rear)
        return 1;
    else
        return 0;
}


// ADDQ / ENQUEUE
void ADDQ(struct que ele)
{
    if(isfull())
    {
        printf("Queue is full\n");
    }
    else
    {
        // If first element is being inserted
        if(front == -1)
        {
            front = 0;
        }

        rear = rear + 1;

        q[rear] = ele;

        printf("Job added successfully\n");
    }
}


// DELETEQ / DEQUEUE
void DELETEQ()
{
    if(isempty())
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("\nDeleted Job:\n");
        printf("Job ID: %d\n", q[front].jobid);
        printf("Title: %s\n", q[front].title);

        front = front + 1;
    }
}


// DISPLAY
void display()
{
    int i;

    if(isempty())
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("\nQueue elements:\n");

        for(i = front; i <= rear; i++)
        {
            printf("Job ID: %d\n", q[i].jobid);
            printf("Title: %s\n", q[i].title);
        }
    }
}


int main()
{
    int choice;
    struct que ele;

    do
    {
        printf("\n1. Add Job");
        printf("\n2. Delete Job");
        printf("\n3. Display Queue");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("Enter Job ID: ");
                scanf("%d", &ele.jobid);

                printf("Enter Job Title: ");
                scanf("%s", ele.title);

                ADDQ(ele);
                break;

            case 2:

                DELETEQ();
                break;

            case 3:

                display();
                break;

            case 4:

                printf("Exiting...\n");
                break;

            default:

                printf("Invalid choice\n");
        }

    } while(choice != 4);

    return 0;
}