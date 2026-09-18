#include <stdio.h>
void search(int arry[],int num,int ele);
void main (){
    int arry[5]={887,889,978,748,798};
    int ele;

    printf("enter the element to be searched:");
    scanf("%d",&ele);
    search(arry,5,ele);

}
void search(int arry[],int num,int ele){
    //bas for loop lagake if else ka game khelna hain 
    int i;
    int found=0;
    for (i=0;i<num;i++){
        if(arry[i]==ele){
            printf("the element is found:%d...%d",arry[i],i+1);
            found = 1;
            break;
        }
        


    }

    if (found==0){
        printf("the element is not in the list");
    }

}