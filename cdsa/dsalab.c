#include <stdio.h>
#include <string.h>
//ask to make a stucture of an array
//members are roll no name and marks 

//so lets make a structure
struct mystru{
    int rno;
    char name[10];
    float marks;
};

//lets accept structure data members
void accept (struct mystru s1[50],int n)
{
//lets make a for loop 
    int i;
    for (i=0;i<n;i++)
    {
        //lets access all the elements index and pass value to the index
        printf("enter the roll no of the students:");
        scanf("%d",&s1[i].rno);

        //for name 
        printf("enter the student name:");
         scanf("%s",s1[i].name);

        //for marks
         printf("enter the student marks:");
            scanf("%f",&s1[i].marks);
    }

}


//we need a function defination for display as well

void display(struct mystru s1[50],int n){
    //for loop we will use and and then we will display 
    int i;
    printf("student details\n");
    for (i=0;i<n;i++)

    {
        //printing rollno
        printf("%d\t",s1[i].rno);

        //printing name
        printf("%s\t",s1[i].name);

        //printing marks
        printf("%f\n",s1[i].marks);
    }
}

void sequentialsearch(struct mystru s1[50],int n,int target){
    int i;
    int hit=0;

    //now we to get to the each an every element
    for(i=0;i<n;i++){
        if(s1[i].rno==target){
            printf("target has been found:%d. %d\n",i+1,s1[i].rno);
            printf("%s\n",s1[i].name);
            hit=1;
            break;
            
        }
    }
    if(hit==0){
        printf("target not found");
    }
}


void bubblesort()
int main (){
    int n;
    struct mystru s1[50];
    
    int target ;
    printf("enter the size:");
    scanf("%d",&n);
    
  

    accept(s1,n);
    display(s1,n);
    printf("enter the target to be found for roll no:");
    scanf("%d",&target);
    sequentialsearch(s1,n,target);
    
    

}

