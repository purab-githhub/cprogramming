#include <stdio.h>
#include <string.h>
//normal hain 
//structure ko pass karne ke liye pehle structure phir function declaration
struct struc{
    //memebrs dalenge normal se
    int age;
    char name[50];


};
//abh jaake function declare karo 
void funcc(struct struc s1);
//kuch notice kiya aapne hamnein struture variable na funtion declare ke parameters
//paranthesis mein he bula leliya 
void main (){
    //yaha par bhi obvious hain stucture variable declare karenge 
    struct struc s1;
    //aabh baas elements pass karne hain members ko 
    s1.age = 18;
    strcpy(s1.name,"king");

    //abh baas member ke elements  ko as an argument pass karna hain
    funcc(s1);//variable he dalna hain aapko at the time of function calling
}
void funcc(struct struc s1){
    //function defination mein hum printing karenge hum structure ki 
    printf("student details\n");
    printf("age of thee student : %d\n",s1.age);
    printf("the name of the student: %s\n",s1.name);

}