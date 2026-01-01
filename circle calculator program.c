#include<stdio.h>

int main() {
    float radius,area,surface_area,volume;
    float pi=3.14159;
    printf("Enter the radius of the circle:");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("Area: %.2f\n",area);

    surface_area=4*pi*radius*radius;
    volume=4*pi*radius*radius*radius/3;
    printf("Surface Area: %.2f\n",surface_area);
    printf("Volume: %.2f",volume);
}