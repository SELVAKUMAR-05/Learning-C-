#include<stdio.h>
#include<windows.h>
int main() {
    int a;
    printf("Enter the number of times to print Hi");
    scanf("%d",&a);
    for (int i=1;i<=a;i++) {
        printf("This is %d time printing Hi\n",i);
        Sleep(800);
    }
}