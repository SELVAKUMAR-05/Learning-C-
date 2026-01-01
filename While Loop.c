#include<stdio.h>
int main() {
    int a;
    int i=1;
    printf("Number Printer From 0 upto User Request\n");
    printf("Enter the number: ");
    scanf("%d",&a);
    while (i<=a) {
        printf("%d\n",i);
        i++;
    }
}