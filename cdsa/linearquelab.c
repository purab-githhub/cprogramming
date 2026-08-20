//lets first define the the size of the queue
#include <stdio.h>
#include <string.h>
#define size 5

//now lets do with the structure creation
struct que
{
    //need to enter the job id
    int jobid;
    char tittle[20];

};
int rear=-1;
int front = -1;
struct que q[size];

// Function to check whether queue is full
int isfull()
{
    if(rear == size- 1)
        return 1;
    else
        return 0;
}


//function to check if the queue is empty
int isempty(){
    if(rear==front)
        return 1;
    else
        return 0;
}

//now lets create a structure array
void ADDQ(struct que ele){
    if(isfull()){
        printf("queue is full");
    }
    else

{
    rear=rear+1;
    q[rear]=ele;
    printf("job added successfully\n");
}
}

void DELETEQ(){
    if(isempty()){
        printf("queue is empty");
    }
    else{
        front=front+1;
        
        printf("Job ID: %d\n", q[front].jobid);
        printf("Title: %s\n", q[front].tittle);
        printf("the element is deleted");
    }

}

void display(){
    int i;
     if(isempty())
    {
        printf("Queue is empty\n");
    }
    else
    {
    for(i=front;i<rear;i++){
        printf("%d\n",q[i].jobid);
        printf("%s\n",q[i].tittle);
    }


}
}


void main(){
    int choice;
    struct que ele;
    do{
    printf("enter the user choice:");
    scanf("%d",&choice);
    //using switch case we are adding and deleteing the queue
  
    
    switch(choice){
        case 1: 
        //lets add the element
        printf("enter the jobid of the people:");
        scanf("%d",&ele.jobid);
        printf("enter the jobtittle of the people: ");
        scanf("%s",ele.tittle);
        ADDQ(ele);
        break;

        case 2:
        //lets delete the queue
        DELETEQ();
        break;
        case 3:
        display();
        break;
    }
}while(choice!=3);
}











