void accept(int a[20][20], int row, int col);
void display(int a[20][20], int row, int col);
void compactmat(int a[20][20], int row, int col, int cm[20][20]);
void transpose(int cm[20][20], int tp[20][20], int row, int col);
void fast(int cm[20][20], int row, int col, int ftm[20][20]);

void accept(int a[20][20], int row, int col)
{
    int i, j;

    printf("Enter the elements:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void display(int a[20][20], int row, int col)
{
    int i, j;

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

void compactmat(int a[20][20], int row, int col, int cm[20][20])
{
    int i, j;
    int k = 1;

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            if(a[i][j] != 0)
            {
                cm[k][0] = i;
                cm[k][1] = j;
                cm[k][2] = a[i][j];
                k++;
            }
        }
    }

    cm[0][0] = row;
    cm[0][1] = col;
    cm[0][2] = k - 1;
}

void transpose(int cm[20][20], int tp[20][20], int row, int col)
{
    int i, j;
    int k = 1;

    tp[0][0] = cm[0][1];
    tp[0][1] = cm[0][0];
    tp[0][2] = cm[0][2];

    for(i = 0; i < cm[0][1]; i++)
    {
        for(j = 1; j <= cm[0][2]; j++)
        {
            if(cm[j][1] == i)
            {
                tp[k][0] = cm[j][1];
                tp[k][1] = cm[j][0];
                tp[k][2] = cm[j][2];
                k++;
            }
        }
    }
}

void fast(int cm[20][20], int row, int col, int ftm[20][20])
{
    int rowTerms[20] = {0};
    int startPos[20] = {0};
    int i, j;

    ftm[0][0] = cm[0][1];
    ftm[0][1] = cm[0][0];
    ftm[0][2] = cm[0][2];

    if(cm[0][2] > 0)
    {
        for(i = 1; i <= cm[0][2]; i++)
        {
            rowTerms[cm[i][1]]++;
        }

        startPos[0] = 1;

        for(i = 1; i < cm[0][1]; i++)
        {
            startPos[i] = startPos[i - 1] + rowTerms[i - 1];
        }

        for(i = 1; i <= cm[0][2]; i++)
        {
            j = startPos[cm[i][1]];

            ftm[j][0] = cm[i][1];
            ftm[j][1] = cm[i][0];
            ftm[j][2] = cm[i][2];

            startPos[cm[i][1]]++;
        }
    }
}

int main()
{
    int a[20][20];
    int cm[20][20];
    int tp[20][20];
    int ftm[20][20];
    int row, col;
    int choice;

    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &row, &col);

    accept(a, row, col);

    printf("\nOriginal Matrix:\n");
    display(a, row, col);

    compactmat(a, row, col, cm);

    printf("\nCompact Matrix:\n");
    display(cm, cm[0][2] + 1, 3);

    printf("\nMenu\n");
    printf("1. Simple Transpose\n");
    printf("2. Fast Transpose\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            transpose(cm, tp, row, col);
            printf("\nSimple Transposed Compact Matrix:\n");
            display(tp, tp[0][2] + 1, 3);
            break;

        case 2:
            fast(cm, row, col, ftm);
            printf("\nFast Transposed Compact Matrix:\n");
            display(ftm, ftm[0][2] + 1, 3);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}