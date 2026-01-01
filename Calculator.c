#include<stdio.h>
int main() {
    float first;
    float second;
    float res;
    char operator;

    printf("Enter the first number: ");
    scanf("%f",&first);

    printf("Enter the operator(+ - * /): ");
    scanf(" %c",&operator);

    printf("Enter the second number: ");
    scanf("%f",&second);

    switch (operator) {
        case '+':
            res=first+second;
            break;
        case '-':
            res=first-second;
            break;
        case '*':
            res=first*second;
            break;
        case '/':
            if (second==0) {
                printf("You can't divide by zero");
                break;
            }else {
                res=first/second;
            }
            break;
        default:
            printf("Invalid Operator");
    }
    printf("Result :%.4f",res);

}