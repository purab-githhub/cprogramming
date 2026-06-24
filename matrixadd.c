#include <stdio.h>
void summitation(int matA[][3], int matB[][3],int sum[][3]);
void main (){
    /*hum jab arrays ko funtion mein likh te teh hum array bana ke pass karteh
    thein to the function abhi hamein 
    addition of two numbers karna hai*/
    int matA[3][3],matB[3][3],sum[3][3];
    int i,j;
    printf("enter the elements for matrix A:\n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            scanf ("%d",&matA[i][j]);
        }
    }
printf("enter the elements for matrix B:\n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            scanf ("%d",&matB[i][j]);
        }
    }
    summitation(matA,matB,sum);
}
void summitation(int matA[][3], int matB[][3], int sum[][3]){
    int i,j;
    //yeh tho hoga summitation
       for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            sum[i][j]=matA[i][j]+matB[i][j];
        }
    }
        printf("summitation print karna hain :\n");
           for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%d\t",sum[i][j]);

        }
        printf("\n");
    
}
}
       
    