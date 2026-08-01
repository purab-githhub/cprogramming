void selectionsorting(struct myarrystruct s1[], int n)
{
    int i, j, min;

    for(i = 0; i < n - 1; i++)
    {
        min = i;

        for(j = i + 1; j < n; j++)
        {
            if(s1[j].marks < s1[min].marks)
            {
                min = j;
            }
        }

        if(min != i)
        {
            struct myarrystruct temp = s1[i];
            s1[i] = s1[min];
            s1[min] = temp;
        }
    }
}
void insertionsorting(struct myarrystruct s1[], int n)
{
    int i, j;
    struct myarrystruct key;

    for(i = 1; i < n; i++)
    {
        key = s1[i];
        j = i - 1;

        while(j >= 0 && s1[j].marks > key.marks)
        {
            s1[j + 1] = s1[j];
            j--;
        }

        s1[j + 1] = key;
    }
}
void shellsorting(struct myarrystruct s1[], int n)
{
    int gap, i, j;
    struct myarrystruct temp;

    for(gap = n / 2; gap > 0; gap = gap / 2)
    {
        for(i = gap; i < n; i++)
        {
            temp = s1[i];

            for(j = i; j >= gap && s1[j - gap].marks > temp.marks; j = j - gap)
            {
                s1[j] = s1[j - gap];
            }

            s1[j] = temp;
        }
    }
}
switch(choice)
{
    case 1:
        search(s1, n, target);
        break;

    case 2:
        bubblesorting(s1, n);
        binarysearch(s1, n, low, high, target1);
        break;

    case 3:
        selectionsorting(s1, n);
        binarysearch(s1, n, low, high, target1);
        break;

    case 4:
        insertionsorting(s1, n);
        binarysearch(s1, n, low, high, target1);
        break;

    case 5:
        shellsorting(s1, n);
        binarysearch(s1, n, low, high, target1);
        break;

    default:
        printf("Invalid Choice");
}