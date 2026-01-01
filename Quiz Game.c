#include<stdio.h>
#include<ctype.h>
int main() {
    int count=0;
    char choice;
    char que[][100]={"What is the Capital Of India ",
                     "How many days are there in a week?",
                     "Which Animal is called the King of the Jungle",
                     "Which color is the sky on a clear day"};
    char opt[][100]={
        "A. Delhi \nB. Mumbai \nC. Chennai\nD. Goa",
        "A. 5 \nB. 6 \nC. 3\nD. 7",
        "A. Tiger\nB. Lion\nC. Elephant\nD. Dog",
        "A. Red\nB. Pink\nC. Blue\nD. Black"};
    char cor[]={'A','D','B','C'};
    int size=sizeof(que)/sizeof(que[0]);
    for (int i=0;i<size;i++) {
        printf("%s \n",que[i]);
        printf("%s \n",opt[i]);
        printf("Enter Your Choice: ");
        scanf(" %c",&choice);
        choice=toupper(choice);
        if (choice==cor[i]) {
            count++;
            printf("Correct Answer\n");
        }else {
            printf("Wrong Answer\n");
        }
    }

    printf("Your score is %d out of %d points",count,size);


}