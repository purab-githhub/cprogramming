 #include <stdio.h>
//lets declare four function
//as we are doing the sparese matrix to the simple transpose
void accept(int a[20][20],int row,int col);
void display(int a[20][20],int row,int col);
//now we will initilise two matrix space or address one is the normal matrix and the other one is sparse matrix
void compactmat(int a[20][20],int row,int col,int cm[20][20]);
void transpose(int cm[20][20],int tp[20][20],int row,int col);

void fast(int cm[20][20],int row, int col,int ftm[20][20]);


//lets starts with void defination
void accept(int a[20][20],int row,int col){
int i,j;
//we need to enter the elements
printf("enter the elements:");
for (i=0;i<row;i++)
{
for(j=0;j<col;j++){
scanf("%d",&a[i][j]);
}
}
}

//now lets display the matrix
void display(int a[20][20],int row,int col){
int i,j;
for (i=0;i<row;i++){
for (j=0;j<col;j++){
printf("%d\t",a[i][j]);
}
printf("\n");
}
}

//now lets right the main logic to get the sparse matrix
void compactmat(int a[20][20],int row,int col,int cm[20][20]){
int k=1;//this is tho access the s.no 1 of the sparse matrix
  int i, j;    
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            if(a[i][j] != 0)//this to check there should be a non zero value
            {
                cm[k][0] = i;//this will hold the row value
                cm[k][1] = j;//this will hold the col value
                cm[k][2] = a[i][j]; //this will hold the value at that row and column
                k++;
            }
        }
    }
    cm[0][0] = row;//the fixed row
    cm[0][1] = col;//the fixed coliumn
    cm[0][2] = k - 1;//the fixed value of non zero
}

void transpose(int cm[20][20],int tp[20][20],int row, int col){
int i,j;
int k=1;
//i just gave the fixed values by just swapping the row and columns and fixing thevalue corner and just passing it to them
tp[0][0]=cm[0][1];
tp[0][1]=cm[0][0];
tp[0][2]=cm[0][2];
for (i=0;i<cm[0][1];i++){//we just want to get the looping to go through the col like suppose col==3 it should looop through 0,1,2;
for (j=1;j<=cm[0][2];j++){
if (cm[j][1]==i){//if the part hold true  means the calue of cm i j gets equall to the the col we want to find then we will do the transpose
tp[k][0]=cm[j][1];
tp[k][1]=cm[j][0];
tp[k][2]=cm[j][2];
k++;
}
}
}
}

void fast(int cm[20][20],int row, int col,int ftm[20][20]);


int main (){
int a[20][20];
int row;
int col;
  int cm[20][20];
    int tp[20][20];
    int ftm[20][20];

    printf("Enter the no. of rows and columns in mat1: ");
    scanf("%d %d", &row, &col);

    accept(a, row, col);
   
 

    printf("\nMatrix 1:\n");
display(a, row, col);
   
    compactmat(a ,row ,col, cm);
   
    printf("\nCompact Matrix: \n");
display(cm, (cm[0][2] + 1), 3);
   
   transpose(cm,tp,row,col);
   
    printf("\nTransposed Compact Matrix:\n");
display(tp, (tp[0][2] + 1), 3);

int choice;
switch (choice){
case 1:
   transpose(cm,tp,row,col);
   break;


}
return 0;
    }