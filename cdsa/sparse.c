#include <stdio.h>
//we will declare a function for twoo arrays one is sparse and one is the transpose
void matrix(int a[][3],int b[][3]){
    //simple according to the psuedo code we will work
    //first wwhat to take 
    //row column and value 
    //fixed things are these
    int m,n,t;
    int col; //for checking for each col to get the transpose
    int p;//normal sparse matrix we want these to handle the s.no
    int q;//tranpose s.no handle we need this
    //now we will give fixed triplet to the sparse matrix
    m=a[0][0];/* this are the fixed things u know that row and column and values which we 
    fixed already*/
    n=a[0][1];
    t=a[0][2];

    //now we assume the same for the transpode matrix as well 
    //as you can see we are calling or writting out the sparse and the transpose first
    //just defying the first fixed things

    b[0][0]=n;//interchanging rows and columns
    b[0][1]=m;
    b[0][2]=t;



    //now chack for non zero s.no means 0th row we will not start we will start directly checking
    //from the 1. s.no
    if(t>0){
        //now we want to get the non zero to q that tho s.no 1
        q=1;

        //now all is set lets starts checking
        //column checking we will do from 0 to the the n th column we decide

        for (col=0;col<n;col++){
            //now we will check for the sparse matrix s.no 1
            for(p=1;p<=t;p++){
                //no serially checking sparse matrix column to the 0,1,2,....,n 
                if(a[p][1]==col){
                    //if this hold true then we will swap the rows and columns and 
                    //keep the vlaue place according to the particular col=0,1,..,n checking
                    // Swap row and column
                    b[q][0] = a[p][1];
                    b[q][1] = a[p][0];

                    // Value remains the same
                    b[q][2] = a[p][2];

                    q++;

                }


            }
        }
    }
}

void main (){
    //lets give the value and lets print them 
    //lets make a sparse matrix 
    
    // Sparse matrix:
    //
    // 0  0  5
    // 8  0  0
    // 0  7  0

    int a[4][3] =
    {
        {3, 3, 3},   // rows, columns, non-zero terms
        {0, 2, 5},
        {1, 0, 8},
        {2, 1, 7}
    };

    int b[4][3];

    int i;

    // Function call
    matrix(a, b);

    printf("Transpose in Triplet Form:\n");
    printf("Row\tColumn\tValue\n");

    for(i = 0; i <= b[0][2]; i++)
    {
        printf("%d\t%d\t%d\n",
               b[i][0],
               b[i][1],
               b[i][2]);
    }

    

}