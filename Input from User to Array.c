#include<stdio.h>
int main() {
    int number[5]={0};

    for (int i=0;i<5;i++) {
        printf("Enter a score: ");
        scanf("%d",&number[i]);
    }
    for (int i=0;i<5;i++) {
        printf("%d ",number[i]);
    }
}