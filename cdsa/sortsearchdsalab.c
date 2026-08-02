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


void bubblesort(struct mystru s1[50],int n){
    int i,j;
    //lets take a temporary variable 
    struct mystru tempvariable;
    //we will apply looping iteration
    //for to get the access of the whole elements and the largest element is to the end n-1
    for(i=0;i<n-1;i++){
        //looping iteration is needed 
        for(j=0;j<n-i-1;j++){
            //now we will compare the adjacent two indexes
            if(s1[j].marks>s1[j+1].marks){
                //now we have to swap
                s1[j]=tempvariable;
                s1[j]=s1[j+1];
                s1[j+1]=tempvariable;


            }
        }
    }
}

//reccurive code iam writting
void binarysearch(struct mystru s1[], int n, int low, int high, int key)
{
    int mid;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(key == s1[mid].marks)
        {
            printf("Marks Found : %f\n", s1[mid].marks);
            printf("Found at student position : %d\n", mid + 1);
            printf("the student name is:%s",s1[mid].name);
            return;//we beed here return 
        }
        else if(key < s1[mid].marks)//checking is normal
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    printf("Marks not found\n");//i missed this part after everything we have to check for result if not found
}
void selectionsort(struct mystru s1[], int n){
    int minpos;
    //in selection sort
    //everything works on sorting and unsorting of data as subarry
    //we will calculate the min pos so we need to get the looping iteration to 
    //n-2 from 0 couz we checck or swap the first index and the smallest elemennt in the arry
    int i,j;
    for(i=0;i<n-2;i++){
        //now we have to assign the the first element as the minpos
        minpos=i; // index 0 is the minpos 
        //now we will cchecck each an every element only the unsorted array must be check
        //loop will work til n-1
        for(j=1;j<n-1;j++){
            //compare to get the smallest element in the unsorted subarray
            if(s1[j].marks<s1[minpos].marks){
                //as i want to get the smallest element right
                minpos=j; 
            }
        }
        if(minpos!=i){
            //now we will swap
            int temporary = s1[i].marks;
            s1[i].marks=s1[i+1].marks;
            s1[i+1].marks=temporary;
        }
    }
}

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
    int low=0;
    
    int high=n-1 ;
    
    int key;
    printf("enter the key to be found for marks:");
    scanf("%d",&key);
    int choice;
    printf("enter the choice for the switch case:");
    scanf("%d",&choice);
    bubblesort( s1,n);
    switch(choice){
    case 1:
    sequentialsearch( s1,n,target);
    break;
    case 2:
    bubblesort( s1,n);
    binarysearch(s1,  n, low, high, key);
    break;
    case 3:
        selectionsort(s1,  n);
        break;



    
    
    
    }
}