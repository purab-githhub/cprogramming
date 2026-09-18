#include <stdio.h>
void bubble(int arry[],int num);
void main (){
    int arry[5]={385,458,658,683,478};
    bubble(arry,5);
}
void bubble(int arry[],int num){
    int i;
    int j;
    int hold;
    /*bhai dekho simple sa funda hain pehle tho doo-doo elemnts ko aapas
    mein compare karna hain\
    tho joo bada hoga na usse swap kardena hain ascending order mein 
    phir joo swapped 5 elements hain vohh phir abhi ascending order mein hai 
    yah nahi nahi pata na hamein 
    aur agar nahi hain tho baar baar for loop nahi laga sakteh na 
    isiliye hum dooo for loop lagange 
    pehla joo iteration ko sambhalega aur dusra joo elements ko swap karega */
    for (i=0;i<num-1;i++){
        for(j=0;j<num-1;j++){
            //humko swap karna hain pehla phir uska dusra element
            //tho hum j[0] phir j[1] ko compare karenge na 
            if(arry[j+1]<arry[j]){
            hold=arry[j];
            arry[j]=arry[j+1];
            arry[j+1]=hold;
            }
        }
    }
        //abh hum print karenge na 
        printf("print the bubble sorted elements:");
        for(i=0;i<num;i++){
            printf("%d\t",arry[i]);
        }

    
}