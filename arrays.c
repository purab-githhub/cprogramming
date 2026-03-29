#include <stdio.h>
void main(){
    int matrix[3][3]={{1,2,3},{2,3,1},{4,5,6}};
    int i,j;
    for (i=0;i<3;i++)//this for loop is too access the layer which is 2d na now it will aceess the row 
    {
        for(j=0;j<3;j++)
        {
            printf("%d",matrix[i][j]);

        }
        printf("\n");
    }
}