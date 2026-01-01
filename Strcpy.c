#include<stdio.h>
#include<stdbool.h>
#include<string.h>
typedef struct  {
    char name[50];
    int age;
    float cgpa;
    bool isFulltime;

} student;
int main() {
    student s1={0};
    strcpy(s1.name,"Sai Krishna Pb");
    s1.age=19;
    s1.cgpa=8.512;
    s1.isFulltime=true;
    printf("The Name of the Student is %s\n",s1.name);
    printf("The age of the Student is %d\n",s1.age);
    printf("The Cgpa of the Student is %.2f\n",s1.cgpa);
    printf("The Student is %s Student \n",(s1.isFulltime)?"Full Time":"Part tinme");
    return 0;
}