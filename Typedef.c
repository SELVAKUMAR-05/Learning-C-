#include<stdio.h>
typedef int Number;
typedef char string[50];

int main() {
    Number a=50;
    Number b=60;
    Number c=a+b;
    printf("%d \n", a);
    printf("%d \n", b);
    printf("%d \n\n", c);
    // Number is the Typedef

    string name1="Sai Krishna";
    string name2="Renu Prakash";
    string name3="Sivanesha Kaman";

    printf("%s \n", name1);
    printf("%s \n", name2);
    printf("%s \n", name3);
}