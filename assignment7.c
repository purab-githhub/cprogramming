#include <stdio.h>

    struct my_structure{
        int roll;
        char name[20];
        int m1,m2,m3;
        int total;
        float percentage;

    };

void main (){
  
    struct my_structure arr[10];
    int n,i;
    printf("enter the number of students:");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("enter the students roll numbers:");
        scanf("%d",&arr[i].roll);
        printf("enter the name of students:");
        scanf("%s",&arr[i].name);
        printf("enter the subjects of the students:");
        scanf("%d%d%d",&arr[i].m1,&arr[i].m2,&arr[i].m3);
        arr[i].total=arr[i].m1+arr[i].m2+arr[i].m3;
        arr[i].percentage=arr[i].m1+arr[i].m2+arr[i].m3/3;
    }
  printf("\nStudent Result:\n");

    for(i=0;i<n;i++)
    {
        printf("Roll No: %d\n",arr[i].roll);
        printf("Name: %s\n",arr[i].name);
        printf("Total Marks: %d\n",arr[i].total);
        printf("Percentage: %.2f\n",arr[i].percentage);
    }


    }


   
