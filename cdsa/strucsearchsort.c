


#include <stdio.h>
#include <string.h>


struct myarrystruct
{
    int roll_no;
    char name[20];
    int marks;
   
};

void funcstr(struct myarrystruct s1[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("Enter Roll No: ");
        scanf("%d", &s1[i].roll_no);

        printf("Enter Name: ");
        scanf("%s", s1[i].name);
       
        printf("enter the students marks:");
        scanf("%d",&s1[i].marks);
    }
}

void display(struct myarrystruct s1[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
       
        printf("Roll No : %d\n", s1[i].roll_no);
        printf("Name    : %s\n", s1[i].name);
        printf("RESULT_marks : %d\n",s1[i].marks);
       
    }
}

// what LL things i will need in the parameters
//structure obviously because on whom i will check sorting

void bubblesorting(struct myarrystruct s1[], int n)
{
    int i, j;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(s1[j].marks > s1[j + 1].marks)
            {
                struct myarrystruct temp = s1[j];
                s1[j] = s1[j + 1];
                s1[j + 1] = temp;
            }
        }
    }
}

//mow lets go with the binary search function 
//we will need target mid low which will be the starting index and high which will be the last index
void binarysearch(struct myarrystruct s1[], int n, int low, int high, int target1)
{
    int mid;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(target1 == s1[mid].marks)
        {
            printf("Marks Found : %d\n", s1[mid].marks);
            printf("Found at student position : %d\n", mid + 1);
            return;//we beed here return 
        }
        else if(target1 < s1[mid].marks)//checking is normal
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
    



//boiw think what all we need to pass to the function as the parameters
//we will need the structure as irt will hold the roll no
//the size
//the target
void search(struct myarrystruct s1[], int n,int target){
int i ;
int hit=0;
for(i=0;i<n;i++){
//now we will check each an every indexb
//comparison is there between each and every element
if(s1[i].roll_no == target){
printf("target found at :%d %d",i+1,s1[i].roll_no);
printf("%s",s1[i].name);
hit=1;
break;
}
}
if (hit==0){
printf("target is not there");






}
}

int main()
{
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);
    int target;
    int target1;
    printf("Enter the target to be found:");
    scanf("%d",&target1);

    printf("Enter the target to be found:");
    scanf("%d",&target);
    int low=0;
    int high=n-1;
    int choice;

       printf("Enter the choice to be found:");
    scanf("%d",&choice);
    struct myarrystruct s1[n];

    funcstr(s1, n);
    display(s1, n);
    bubblesorting(s1,n);
    //yah pe target funcion calling hoga
    

    switch (choice)
    {
    case 1:
        search(s1, n, target);
        break;
    case 2:
        bubblesorting(s1, n);
        binarysearch(s1, n, low, high, target1);
        break;
  
    }

    return 0;
}