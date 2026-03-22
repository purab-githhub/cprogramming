#include <stdio.h>
#include <stdio.h>
#include<stdbool.h>
void main (){
    int p_holdingnum;
    int i; //for goin through prime numbers looping iterate
    //abbh maine intialise kiya 100 nos but aageeh jaaake mein even number ko hatne vala hu tho 50 space memory allocate kiya 

    int prime_numbers[50]={0};
    int prime_index=2;

    bool isPrime;

    //algorithim mein hardcoring hai two number ki joo muje help karenge loop ke waqt to check prime numbers
    prime_numbers[0]=2;
    prime_numbers[1]=3;

    //abb lagega for loop uss pe joo mere numbers lega baas hold karega baas muje check karna hai unn number pe primme numbers hai yah nahi 
    for(p_holdingnum=5;p_holdingnum<100;p_holdingnum=p_holdingnum+2){
        isPrime = true;
        //abh baas mein shuru mein check kara diya ke joo bhi numbers mere pe mein hai shuru mmein prime numbers hai  
        //abh ise checck karne ke baare 
        //divide karwaunga ek prime number se
        for (i=0; isPrime && p_holdingnum/prime_numbers[i]>=prime_numbers[i];i++);{
            if (p_holdingnum%prime_numbers[i]==0)
                isPrime=false;
            if(isPrime==true){

            
            // abhh baas passing karna hai saari values
            prime_numbers[prime_index]=p_holdingnum;
            ++prime_index;
        }
                 for ( i = 0;  i < primeIndex;  ++i )
         printf ("%i  ", primes[i]);

    printf("\n");
    

            
        }
    }

}