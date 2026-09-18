#include<stdio.h>
#include <string.h>
void main (){
    char str1[50],str2[50];
    int choice;
    printf("enter the first string:");
    scanf("%s",str1);
    printf("enter the second string:");
    scanf("%s",str2);
    printf("enter the user choice:");
    scanf("%d",&choice);
    printf("\n--- String Operations Menu ---\n");
        printf("1. Length of string\n");
        printf("2. Copy string\n");
        printf("3. Concatenate strings\n");
        printf("4. Compare strings\n");
        printf("5. Exit\n");
     
    switch (choice){
        case 1:
        printf("the length of the string is %d\n",strlen(str1));
        printf("the length of the string is %d\n",strlen(str2));
        break;
        case 2:
        strcpy(str1,str2);
        printf("copying of the string:%s\n",str1);//s1 mein he copy hoga string
        break;
        case 3:
        strcat(str1,str2);
        printf("concatenation of two strings:%s\n",str1);
        break;
        case 4:
        if(strcmp(str1,str2)==0){
            printf("they are equal");
        }else{
            printf("they are not equal");  
        }
        break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");

    }
}