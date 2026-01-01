#include <stdio.h>
int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d",&age);

    if (age<18) {
        printf("You are a child");
    }else if (age>60) {
        printf("You are a senior citizen");
    }else {
        printf("You are a working parent");
    }
}