#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
int main() {
    srand(time(0));
    int ran=rand();
    ran=(ran%3)+1;
    int n;

    printf("*** Rock Paper Scissor *** \n");
    printf(("Choose an option \n"));
    printf("1. Rock \n");
    printf("2. Paperr \n");
    printf("3. Scissors \n");
    printf("Enter your choice: ");
    scanf("%d",&n);
    char na[50];
    switch (n) {
        case 1:
            printf("You choose Rock! \n");
            strcpy(na,"Rock");
            break;
        case 2:
            printf("You choose Paper \n");
            strcpy(na,"Paper");
            break;
        case 3:
            printf("You choose Scissor \n");
            strcpy(na,"Scissor");
            break;
        default:
            printf("Invlaid Input \n");
    }
    switch (ran) {
        case 1:
            printf("Computer choose Rock! \n");
            break;
        case 2:
            printf("Computer choose Paper \n");
            break;
        case 3:
            printf("Computer choose Scissor \n");
            break;
    }
    if (n==ran) {
        printf("Both choose %s",na);
    }else if ((n==1 && ran==2)||(n==2 && ran==3)||(n==3 && ran==1)) {
        printf("Computer win!");
    }else {
        printf("You win!");
    }
}