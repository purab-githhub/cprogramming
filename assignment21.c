#include <stdio.h>
int main (){
    FILE *src ,*dest;
    char filename[50], filename2[50],ch;
    //doo printf statements abhi he dal rahe hai 
    //ek file khone ko aur ek file dalne ko destination mein 
    printf("enter the source file:");
    scanf("%s",filename);
    printf("enter the destination source file :");
    scanf("%s",filename2);
    //abh read kara ke open karenge source file 

src=fopen(filename,"r");
if(src == NULL){
    printf("error in the source file");
    return 1;
}
dest=fopen(filename2,"w");
if (dest == NULL) {
        printf("Error: Cannot create destination file!\n");
        fclose(src);
        return 1;   


}
// abh copy karna hai each an every character from source file to destination file
//while loop chalega 
while ((ch=fgetc(src))!=EOF){
    fputc(ch,dest);

}
printf("file is copied successfully");
//now close the src file and dest file
fclose(src);
fclose(dest);
return 0;
}
