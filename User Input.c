#include<stdio.h>
#include<string.h>
int main() {
    char name[50];
    int age;
    float gpa;
    char grade;

    printf("Enter your name: ");
    fgets(name, 50, stdin);
    name[strlen(name)-1]='\0';

    printf("Enter your age: ");
    scanf("%d",&age);

    printf("Enter your grade: ");
    scanf(" %c",&grade);

    printf("Enter your gpa: ");
    scanf("%f",&gpa);

    printf("Your name is %s\n",name);
    printf("Your age is %d \n",age);
    printf("Your grade is %c\n",grade);
    printf("Your gpa: %.2f\n",gpa);
    return 0;

}