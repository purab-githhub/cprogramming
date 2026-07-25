#include <stdio.h>

int main()
{
    int arr[7];          //stores the 7 data bits
    int index[12] = {0}; //using positions from 1 to 11 for hamming code

 

    
    printf("       TRANSMITTER SIDE\n");
    

    //lets enter the 7 data bits
    printf("Enter the 7 data bits (0 or 1): ");
    scanf("%d %d %d %d %d %d %d",
          &arr[0], &arr[1], &arr[2],
          &arr[3], &arr[4], &arr[5], &arr[6]);

    //as we know the data bits are placed at non parity positions
    index[3] = arr[0];
    index[5] = arr[1];
    index[6] = arr[2];
    index[7] = arr[3];
    index[9] = arr[4];
    index[10] = arr[5];
    index[11] = arr[6];

    //now lets calculate all the parity bits using even parity

    //R1 checks positions 1,3,5,7,9,11
    index[1] = index[3] ^ index[5] ^ index[7] ^ index[9] ^ index[11];

    //R2 checks positions 2,3,6,7,10,11
    index[2] = index[3] ^ index[6] ^ index[7] ^ index[10] ^ index[11];

    //R4 checks positions 4,5,6,7
    index[4] = index[5] ^ index[6] ^ index[7];

    //R8 checks positions 8,9,10,11
    index[8] = index[9] ^ index[10] ^ index[11];

    //now lets print the generated hamming code
    printf("\nGenerated Hamming Code:\n");

    for(int i=1;i<=11;i++)
    {
        printf("%d ",index[i]);
    }

    printf("\n");

  

    printf("        RECEIVER SIDE\n");
 

    int receive[12];

    //lets enter the received hamming code
    printf("Enter the received 11-bit Hamming Code:\n");

    for(int i=1;i<=11;i++)
    {
        scanf("%d",&receive[i]);
    }

    //now lets again calculate the parity bits to check if there is any error

    int c1,c2,c4,c8,error;

    //checking R1
    c1 = receive[1]^receive[3]^receive[5]^receive[7]^receive[9]^receive[11];

    //checking R2
    c2 = receive[2]^receive[3]^receive[6]^receive[7]^receive[10]^receive[11];

    //checking R4
    c4 = receive[4]^receive[5]^receive[6]^receive[7];

    //checking R8
    c8 = receive[8]^receive[9]^receive[10]^receive[11];

    //finding the error position
    error = c1 + (c2*2) + (c4*4) + (c8*8);

    //if the error position is zero then there is no error
    if(error==0)
    {
        printf("\nNo Error Detected.\n");
    }
    else
    {
        printf("\nError Detected at Position = %d\n",error);

        //lets correct the wrong bit
        receive[error] = !receive[error];

        //now lets print the corrected hamming code
        printf("Corrected Hamming Code:\n");

        for(int i=1;i<=11;i++)
        {
            printf("%d ",receive[i]);
        }

        printf("\n");
    }

    //finally lets print the original data bits
    printf("\nOriginal Data Bits:\n");

    printf("%d %d %d %d %d %d %d\n",
           receive[3],
           receive[5],
           receive[6],
           receive[7],
           receive[9],
           receive[10],
           receive[11]);

    return 0;
}