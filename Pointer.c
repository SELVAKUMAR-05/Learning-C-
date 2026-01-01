#include<stdio.h>
int main() {
    int a=30;
    int *pointer=&a;
    // & represent the address of the variable
    //*pointer represent the value at the pointer
    printf("Pointer stores the address: %p \n",pointer);
    printf("The Pointer stores the a value: %d",*pointer);
}