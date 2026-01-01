#include<stdio.h>
#include<string.h>
int main() {
    char item[25];
    float price;
    int counts;

    printf("What item would you like to buy?: ");
    fgets(item,sizeof(item),stdin);
    item[strlen(item)-1] = '\0';

    printf("What is the price for each?: ");
    scanf("%f", &price);


    printf("How many would you like?: ");
    scanf("%d",&counts);

    printf("You have bought %d %ss \n", counts,item);
    printf("The total is $%.2f",price*counts);

}