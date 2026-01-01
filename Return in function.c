#include<stdio.h>
int square(int num) {
    num*=num;
    return num;
}
int main() {
    printf("Square value finder\n");
    int num;
    printf("Enter the number to find the square");
    scanf("%d",&num);
    printf("The square of the number is %d",square(num));
}