#include <stdio.h>
#include <string.h>
//bhai kuch tho crazy karne vale hain apan 
//we are going to pass array to structure then array of struture is to be written in the function
//normal structure define karo 
struct struc{
    //normal members likhege 
    int age;
    char name[50];

};
//we will now declare the function
void struc(struct struc s[],int num);//int num isiliye kyuki hum array ki size define karenge function ko 
void main (){
    struct struc s[3];
    int i;
    //in normal way we will enter elements to the members like for loop se we will give 
    //elements
    for(i=0;i<3;i++){
        //printf statements comes by seeing the number of members are there in the structure
        printf("enter the stundent age:");
        scanf("%d",&s[i].age);
        printf("enter the student name:");
        scanf("%s",s[i].name);
    }

    //now we just have to declare the function calling statments
    struc(s,3);
}
void struc(struct struc s[],int num){
    //idhar hum print karaenge memebrs ko 
    printf("student details");
    int i;
    for (i=0;i<num;i++){
        printf("students name : %s\n",s[i].name);
        printf("students age : %d\n",s[i].age);
    }
}