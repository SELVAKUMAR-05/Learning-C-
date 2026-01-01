#include<stdio.h>
int add(int a,int b);
int main() {
    int a,b;
    printf("Enter the First Number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);

    int result=add(a,b);
    printf("The addition value is %d",result);
}
int add(int a,int b) {
    return a+b;
}