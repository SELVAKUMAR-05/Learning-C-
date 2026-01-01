#include<stdio.h>
int main() {
    int i=1;
    int n;
    printf("Enter the number of time print statement should be Established: ");
    scanf("%d",&n);
    do {
        printf("This is %d time printing Hi\n",i);
        i++;
    }while (i<=n);
}