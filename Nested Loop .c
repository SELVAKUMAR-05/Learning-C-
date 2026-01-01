#include<stdio.h>
int main() {
    int n;
    printf("Enter which table you need to print");
    scanf("%d",&n);
    for (int k=n;k<n+1;k++) {
        for (int i=1;i<=10;i++) {
            printf("%d * %d = %d \n",k,i,k*i);
        }
    }
}