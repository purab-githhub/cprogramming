#include <stdio.h> // for printf
#include <stdlib.h> // for function abs absloute
#include <limits.h> // for INT_MAX

//function delare karenge
void closetnum(int n , int m);

void main (){
    //yaha pe num and m mangte hhain 
    //closet and the divisor ke liye m 
    int n ;
    int m;
    printf("enter the number to get the closet of :");
    scanf("%d",&n);
    printf("enter the divisor you want :");
    scanf("%d",&m);
    //function call karke dono bhej dete hain 
    closetnum(n,m);
}

//function calling karlete hain
void closetnum(int n, int m){
    //valuse dete haib closet ko and difference ko
    int i;
    int closet =0;
    int diff = INT_MAX;
    //closet will store the closet value by n at the time of if statements
    //int max is the largest possible int value

    //for loop lagate hain kyuki starting value lower nibble takh jaega matlab n-abs(m)
    //and ending hum n+abs(m) takh lelete hain 

    for (i=n-abs(m);i<=n+abs(m);++i){
        //abh chech karenge ke i divisble hain kya nahi m se
        if (i%m==0){
            //abh calculate karenge distance
            int difference = abs(n-i);
            /*now we have to check whether did we find a number ccloser than our best answer 
            or if both are equally closed we will select the number habing 
            the frater absolute value
            */
           if(difference<diff || (difference==diff && abs(i)>abs(closet)))  {
            closet=i;
            diff=difference;

           }

        }
    }
    printf("%d",closet);
}