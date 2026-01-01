#include <stdio.h>
int main() {
    int a=5;
    int b=3;
    int add,sub,mul,div,mod;
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;

    printf("The sum of a+b is %d\n",add); //8
    printf("The sum of a-b is %d\n",sub); //2
    printf("The sum of a*b is %d\n",mul); //15
    printf("The sum of a/b is %d\n",div); //1
    printf("The sum of a%b is %d\n",mod); //2
}