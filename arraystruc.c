#include <stdio.h>
#include <string.h>
//3 baacho ka lete hain information student details
struct myarrstr{
    //normal members declare karna hain yeh aapka 
    //yeh hoga fixed categories vala section 
    int prn;
    char college[50];
    char name[30];
    
};
void main (){
    int i;
    //3 bacho ka structure mein arrray lenge hum 
    //variable jaise aap define karteh ho na vaise bass usko array jaisa ssize dedo 
    //like array[5]
    struct myarrstr s1[3];
    //aacess tho ek ek karke kar sakteh hain jaise hum array ko access karteh thein 
    //s1[0].college aise karteh carteh pura 3 students ka hum struture array bana 
    //ke print karwa sakteh hain but lets try looping 
    printf("enter elements to the struture:");
    for (i=0;i<3;i++){
        //3 members hain tho 3 printf and sccanf cheezin aaenge
        printf("enter the PRN number:");
        scanf("%d",&s1[i].prn);

        printf("enter the school :");
        scanf("%s",s1[i].college);

        printf("enter the name of the student:");
        scanf("%s",s1[i].name);
        //sare memmbers ka enter hooega abh accordingly through forloop
        
    }

    //abbh kya hain print karana hain

    for(i=0;i<3;i++){
        printf("PRN no:%d\n",s1[i].prn);
        pritnf("student school name:%s\n",s1[i].college);
        printf("name of the studdent:%s\n",s1[i].name);

        
    }
}