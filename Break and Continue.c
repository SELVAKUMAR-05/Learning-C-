#include<stdio.h>
int main() {
    for (int i=1;i<=5;i++) {
        if (i==3) {
            continue;
        }
        printf("%d\n",i);
    }printf("\n\n");
    for (int i=6;i<=10;i++) {
        if (i==8) {
            break;
        }
        printf("%d\n",i);
    }

}