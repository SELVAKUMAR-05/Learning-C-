#include<stdio.h>
int main() {
    int temp;
    printf("Enter the temperature ");
    scanf("%d",&temp);
    //and
    if (temp>0 && temp<30) {
        printf("The temperature is good\n");
    }else {
        printf("The temperature is Bad\n");
    }
    //or
    int age;
    int salary;
    printf("Enter the age ");
    scanf("%d",&age);
    printf("Enter the salary ");
    scanf("%d",&salary);
    if (age<45 || salary>50000) {
        printf("You are eligible\n");
    }else {
        printf("You are not eligible\n");
    }


    //not
    if (!(2==2)) {
        printf("You are not eligible");
    }else {
       printf(" you are good guy");
    }
}