#include<stdio.h>
int main() {

    char choice;
    float temp;
    float result;

    printf("Temperature Conversion Program\n");
    printf("C. Celcius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsisus\n");

    printf("Is the temp is Celsius (C) or Fahrenheit (F)? : ");
    scanf("%c",&choice);

    if (choice=='c' || choice=='C') {
        printf("\nEnter the temperature in Celsius: ");
        scanf("%f",&temp);
        result=(temp*9/5)+32;
        printf("%.1f Celsius is equal to %.1f Fahrenheit",temp,result);
    }
    else if (choice=='f' || choice=='F') {
        printf("\nEnter the temperature in Fahrenheit: ");
        scanf("%f",&temp);
        result=(temp-32)*5/9;
        printf("%.1f Fahrenheit is equal to %.1f Celsius",temp,result);

    }else {
        printf("Invalid Choice");
    }
}