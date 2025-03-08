#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *file = fopen("example.txt","a");
   if(file==NULL){
    printf("error opening file for writing.\n");
    return 1;
    }
    fprintf(file , "hello ,world!\n");
    fprintf(file,"this is a simple file handling example in C.\n");
    fclose(file);
    printf("data updated to file successfully.\n");
    return 0;
}

