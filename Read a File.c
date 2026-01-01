#include<stdio.h>
int main() {
    FILE *pFil=fopen("input.txt","r");
    if (pFil==NULL) {
        printf("Error in opening the file");
        return 1;
    }
    char buffer[1024]={0};
    while (fgets(buffer,sizeof(buffer),pFil)!=NULL) {
        printf("%s",buffer);
    }

    printf("\nReading is Successfully completed");
    fclose(pFil);
}