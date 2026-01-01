#include<stdio.h>
#include<string.h>
void birthdaysong(char name[],int age) {
    printf("Happy Birthday to You! \n");
    printf("Happy Birthday to You! \n");
    printf("Happy Birthday dear %s \n",name);
    printf("You are %d years old\n",age);
    printf("Happy Birthday to You! \n\n");

}
int main() {
    printf("Birth Day Song Makker\n");
    char name[50];
    int age;

    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0';

    printf("Enter your age");
    scanf("%d",&age);

    birthdaysong(name,age);
    birthdaysong(name,age);
    birthdaysong(name,age);
}