#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    int ran=rand();
    ran=(ran%100)+1;
    int n;
    printf("Guess a number between 1-100");
    scanf("%d",&n);
    do{
        if (n==ran) {
            printf("Correct!");
        }
        else if (n>ran) {
            printf("Too High!");
            scanf("%d",&n);
        }else {
            printf("Too Low");
            scanf("%d",&n);
        }
    }while (n!=ran);
    if (n==ran) {
        printf("Correct!");
    }
}