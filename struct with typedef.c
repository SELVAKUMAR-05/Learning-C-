#include<stdio.h>
#include<stdbool.h>
typedef struct  {
    char name[50];
    int age;
    float cgpa;
    bool isFulltime;

} student;
int main() {
    student s1={"Sai Krishna Pb",19,8.3,true};
    printf("The Cgpa of the Student is %.2f",s1.cgpa);

}