#include<stdio.h>
#include<string.h>
int main() {
    printf("Enter Your 5 Friends Name \n");
    char name[5][30]={0};
    for (int i=0;i<5;i++) {
        printf("Enter the %d Fiend Name: ",i+1);

        fgets(name[i],sizeof(name[i]),stdin);
        name[i][strlen(name[i])-1]='\0';

    }
    printf("Your 5 Friends Name are: \n");
    for (int i=0;i<5;i++) {
        printf("%d. %s \n",i,name[i]);
    }
}