#include <string.h>
#include<stdio.h>
typedef struct {
    char name[50];
    int model;
    int prize;
}Bike;
int main() {
    Bike bikes[]={
        {"Kawasiki Ninja H2r",2023,50000},
        {"Royal Enfield",2024,55000},
        {"Duke",2025,60000}
    };
    printf("List of bikes for Sale\n\n");
    int n=sizeof(bikes)/sizeof(bikes[0]);
    for (int i=0;i<n;i++) {
        printf("Bike %d Details:- \n",i+1);
        printf("Bike Name: %s\n",bikes[i].name);
        printf("Bike Model: %d\n",bikes[i].model);
        printf("Bike Price: %d\n\n",bikes[i].prize);

    }

}