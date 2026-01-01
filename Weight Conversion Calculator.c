#include<stdio.h>
int main() {
    int choice;
    float weight;
    float result;

    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");

    printf("Enter your choice (1 or 2): \n");
    scanf("%d",&choice);

    if (choice==1) {
        printf("Enter the weight in Kilograms: ");
        scanf("%f",&weight);
        result=weight*2.20462;
        printf("\n%.2f kilograms is equal to %.2f pounds",weight,result);
    }else if (choice==2) {
        printf("Enter the weight in Pounds: ");
        scanf("%f",&weight);
        result=weight*0.453592;
        printf("\n%.2f Pounds is equal to %.2f Kilograms", weight,result);
    }else {
        printf("Invalid Choice");
    }
}