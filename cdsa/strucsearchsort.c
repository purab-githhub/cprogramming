


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
    printf("Enter the target to be found:");
    scanf("%d",&target);

    struct myarrystruct s1[n];

    funcstr(s1, n);
    display(s1, n);
    //yah pe target funcion calling hoga
    search(s1,n,target);

 
}