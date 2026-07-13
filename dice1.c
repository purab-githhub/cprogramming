#include <stdio.h>
// mein kya karu hu dekh muje sirf range 1 to 6 mein check karna hain 
//pehle tho mein face ka number manga leta hu 
void main (){
    int facenum;
    printf("enter the number on the face :");
    scanf("%d",&facenum);

    //abh mein uss face ke num se sabhe 1 to 6 no on the face se compare karwadunga aur 
    //uska opposite print karwadunga
    int ans;


    if (facenum==1){
        ans=6;
        
    }else if (facenum == 2){
        ans=5;

    }
    else if(facenum == 3){
        ans=4;
    }
    else if(facenum ==6){
        ans=1;
    }
    else if (facenum ==5){
        ans=2;
    }
    else if(facenum == 4){
        ans = 3;
    }
    printf("%d",ans);

    }
