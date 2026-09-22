#include <stdio.h>

#define n 5

int Q[n];
//intially the queue has nothing
int front = 0, rear = 0;

void AddCQ(int elem)
{
    /*now in linear queue we cant go back to the begining so this is not 
    a problem in circular queue if suppose 0 1 2 3 4 then 4 can go back to 0 again
    this is why rear+1 is there*/

    //%n helps us to go to it like 1%5=1 type
    if ((rear + 1) % n == front)
    {
        printf("Queue Full\n");
    }
    else
    {//eg Q[1]=101 addded
        rear = (rear + 1) % n;
        Q[rear] = elem;
        printf("Print Job %d added to queue.\n", elem);
    }
}

void DelCQ()
//we want to process the print job
{
    int elem;
//noraml checking condidtion alweays if queue is empty check front==rear
//it check like suppose we added rear to two places than front will work 
//from zero to that two places 
//just to print the print job
    if (front == rear)
    {
        printf("Queue Empty\n");
    }
    else
    {
        front = (front + 1) % n;
        elem = Q[front];
        printf("Print Job %d processed.\n", elem);
    }
}

void DisplayCQ()
{
    int i;

    if (front == rear)
    {
        printf("Queue Empty\n");
    }
    else
    {
        //front is 0
        //rear has 3 values
        printf("Pending Print Jobs:\n");
        //why front +1 beacuse fronts points to the position before the first position 

        //i is 1
        i = (front + 1) % n;

        while (i != (rear + 1) % n)
        {//1!=3 yes 
            printf("%d ", Q[i]);//print tthe print jobs
            i = (i + 1) % n;
        }

        printf("\n");
    }
}

int main()
{
    int choice, job;

    do
    {
        printf("\n--- Printer Queue Manager ---\n");
        printf("1. Add a Print Job\n");
        printf("2. Process a Print Job\n");
        printf("3. Display All Pending Print Jobs\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Print Job number: ");
                scanf("%d", &job);
                AddCQ(job);
                break;

            case 2:
                DelCQ();
                break;

            case 3:
                DisplayCQ();
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 4);

    return 0;
}

