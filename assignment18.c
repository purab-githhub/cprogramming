#include <stdio.h>
#include <string.h>
void main (){
     char str[50],str2[50],rev[50];
    int i,len,flag=1;
    printf("enter a string :");
    scanf("%s",str);
    len=strlen(str);
    printf("%d\n",len);
    for (i=0;i<len;i++){
        rev[i]=str[len-i-1];
    }
    rev[i] = '\0';

    printf("%s\n", rev);
    printf("enter the second substring:");
    scanf("%s",str2);
    if(strcmp(str,str2)==0){
        printf("they are equal\n");
    }else{
        printf("they are not equal");
    }
    if(strcmp(str, rev) == 0){
        printf("Palindrome\n");
}else{
        printf("Not Palindrome\n");
}

        
        if(strstr(str, str2) != NULL){
        printf("Substring found\n");
        }else{
        printf("Substring not found\n");
        }
    }
    
