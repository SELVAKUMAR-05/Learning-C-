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
    int a=50;
    int *pep=&a;
    printf("%d \n",a );
    printf("%d \n",*pep);
    printf("%d \n",&a );
    printf("%d \n",pep);

    printf("%p \n",&a);
    printf("%p \n ",a);
    printf("%p \n",&pep);
    printf("%p",pep);

}
//000000df3a7ffe34
//00000018ed1ffd60
//000000e7877ffad4
//0000000000000032