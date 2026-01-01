#include<stdio.h>
typedef enum { // defaulty start with 0 or we can define number based on needs

    Monday =1, Tuesday=2, Wednesday=3, Thursday=4, Friday=5, Saturday=6,Sunday=7
}day;
int main() {
    day Today = Wednesday;
    printf("%d ",Today);

}