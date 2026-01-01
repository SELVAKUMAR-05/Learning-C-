#include<stdio.h>
int fact(int n) {
    if (n==0) {
        return 1;
    }
    return n*fact(n-1);
}
int main() {
    int n;
    printf("Enter a number to find the factorial of it \n");
    scanf("%d",&n);
    if (n<0) {
        printf("Factorial of negative number is not possible\n");
    }else {
        printf("The Factorial of the %d is %d",n,fact(n));
    }
}