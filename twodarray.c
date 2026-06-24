#include <stdio.h>
void main (){
    int my_array[100][100];
    int i,j ;
    int rows ;
    int columns;
    printf("enter the row:");
    scanf("%d",&rows);
    printf("Enter the column:");
    scanf("%d",&columns);
    for (i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            printf("Enter the array elemnts");
            scanf("%d",&my_array[i][j]);
        }
    }
    for (i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            printf("print the array : %d\n",my_array[i][j]);

    }
}