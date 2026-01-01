#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    printf("Enter the number of grades: ");
    scanf("%d",&n);
    char *grades =malloc(n*sizeof(char));
     if (grades==NULL) {
         printf("Memory Allocation Failed");
         return 1;
     }

    for (int i=0;i<n;i++) {
        printf("Enter the grade %d: ",i+1);
        scanf(" %c",&grades[i]);
        printf("\n");
    }int size=sizeof(grades)/sizeof(grades[0]);
    for (int i=0;i<size;i++) {
        printf(" %c",grades[i]);
    }
    free(grades);
}