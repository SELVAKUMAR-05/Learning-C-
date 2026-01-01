#include<stdio.h>

int main() {
    int dayofweek;
    printf("Enter the day of the week: ");
    scanf("%d",&dayofweek);

    // can implement character also

    switch (dayofweek) {
        case 1:
            printf("It is Monady");
            break;

        case 2:
            printf("It is Tuesday");
            break;

        case 3:
            printf("It is Wednesday");
            break;

        case 4:
            printf("It is Thursday");
            break;

        case 5:
            printf("It is Friday");
            break;

        case 6:
            printf("It is Saturday");
            break;

        case 7:
            printf("It is Sunday");
            break;
        default:
            printf("Invalid Input. ");
    }
}