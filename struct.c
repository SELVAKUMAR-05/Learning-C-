#include<stdio.h>
#include<stdbool.h>
struct student {
    char name[50];
    int age;
    float cgpa;
    bool isFulltime;

};
int main() {
    struct student s1={"Sai Krishna Pb",19,8.3,true};
    printf("The name of the Student is %s",s1.name);

}