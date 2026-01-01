#include<stdio.h>
#include<stdbool.h>
int main() {
    float price=100;
    int isSenior;
    int isStudent;

    printf("Enter true or false whether you are senior: \n");
    scanf("%d",&isSenior);


    printf("Enter true or false whether you are student:");
    scanf("%d",&isStudent);

    isSenior=isSenior?true:false;
    isStudent=isStudent?true:false;

    // senior =10 % discount
    // student = 20% discout
    //student+senior =30 % discoubt
    if (isStudent) {
        if (isSenior) {
            price *= 0.7;
        }else {
            price *= 0.8;
        }
    }else {
        if (isSenior) {
            price *= 0.9;
        }
    }
    printf("The price of the ticket is %.2f",price);

}