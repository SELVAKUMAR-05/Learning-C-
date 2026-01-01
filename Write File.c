#include<stdio.h>
#include<string.h>

int main() {
     FILE *pFile=fopen("Output.txt","w");
     char text[1000];
     printf("Enter text:");
     fgets(text,sizeof(text),stdin);
     text[strlen(text)-1]='\0';
     if (pFile==NULL){
          printf("File Openig Failed");
          return 1;
     }
     fprintf(pFile,"%s",text);
     fprintf(pFile,"\n  The print is Succesfull");
    printf("writing is successfully written");
     fclose(pFile);
     return 0;
}