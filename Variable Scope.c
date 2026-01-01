#include<stdio.h>
int a=5; //global scope
int add() {
    int b=2; // local scope
    if (1) {
        int c=5; //block scope
        printf("%d\n",c);
    }
    goto x; //Function scope
    x:
    printf("%d",a+b);
}
int main() {
    add();
}