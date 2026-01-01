#include<stdbool.h>
#include<stdio.h>
int main() {
    bool isfriend=true;// true can be also called as 1
    // false can also be as 0;

    if (isfriend) {
        printf("Yes Friend\n");
    }bool neg=0;
    if (neg) {
        printf("The value is +ve\n");
    }else {
        printf("The value is -ve\n");
    }
    printf("Whether sai is your %d friend",isfriend);
}