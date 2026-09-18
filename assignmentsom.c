#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], sum[3][3];
    int i,j,k,choice,min,col;
    int r1,r2,r3,c1,c2,c3,d1,d2;

    printf("Enter matrix A:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    printf("Enter matrix B:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);

    printf("\n1.Addition\n2.Saddle Point\n3.Transpose\n4.Magic Square\n");
    printf("Enter choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:   // Addition
        for(i=0;i<3;i++)
            for(j=0;j<3;j++)
                sum[i][j] = a[i][j] + b[i][j];

        printf("Sum matrix:\n");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++)
                printf("%d ",sum[i][j]);
            printf("\n");
        }
        break;

        case 2:   // Saddle point
        for(i=0;i<3;i++)
        {
            min = a[i][0];
            col = 0;

            for(j=1;j<3;j++)
            {
                if(a[i][j] < min){
                    min = a[i][j];
                    col = j;
                }
            }

            for(k=0;k<3;k++)
            {
                if(a[k][col] > min)
                    break;
            }

            if(k==3)
                printf("Saddle point = %d",min);
        }
        break;

        case 3:   // Transpose
        printf("Transpose:\n");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++)
                printf("%d ",a[j][i]);
            printf("\n");
        }
        break;

        case 4:   // Magic square
        r1 = a[0][0]+a[0][1]+a[0][2];
        r2 = a[1][0]+a[1][1]+a[1][2];
        r3 = a[2][0]+a[2][1]+a[2][2];

        c1 = a[0][0]+a[1][0]+a[2][0];
        c2 = a[0][1]+a[1][1]+a[2][1];
        c3 = a[0][2]+a[1][2]+a[2][2];

        d1 = a[0][0]+a[1][1]+a[2][2];
        d2 = a[0][2]+a[1][1]+a[2][0];

        if(r1==r2 && r2==r3 && r3==c1 && c1==c2 && c2==c3 && c3==d1 && d1==d2)
            printf("Magic Square");
        else
            printf("Not Magic Square");
        break;

        default:
        printf("Invalid choice");
    }

    return 0;
}