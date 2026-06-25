#include <stdio.h>
#include <string.h>
//lets play with nested structure this time 
//mein ek program likh raha hu understanding ke liye
//student k aprn lunga percewntage name and division and address
//address mera ek aur struccture hojaega kyuki mein cccity aur state and pin code bhi dalunga
//pehla address ka structure
struct myaddress{
    char city[30];
    char state[30];
    long long int pincode;
};
struct mystructure {
    int age;
    char myname[30];
    float percent;
    long long int prn;
    //abh mein na address vale strut ko call karunga iss add ress mmein 
    //struct ka variable jaise decclare karteh hain na vohh he karenge 
    struct myaddress t1;

};
void main (){
    //values dalna hain humko struccture mein
    //pehle mein mystructure ko bhi variable dedu
    struct mystructure t2;
    t2.age=18;
    strcpy(t2.myname,"king");
    t2.percent=98.78;
    t2.prn=1262252503;
    //abh same tareke se address vale structure ko lekhenge
    //bus main structure ka variable followed by the nested structure ka variable 
    strcpy(t2.t1.city,"sector_N");
    strcpy(t2.t1.state,"delhi");
    t2.t1.pincode=4110114;
    printf("Age = %d\n", t2.age);

printf("Name = %s\n", t2.myname);

printf("Percentage = %.2f\n", t2.percent);

printf("PRN = %lld\n", t2.prn);

printf("City = %s\n", t2.t1.city);

printf("State = %s\n", t2.t1.state);

printf("Pincode = %lld\n", t2.t1.pincode);
}
