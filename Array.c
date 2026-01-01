#include<stdio.h>
int main() {

    int number[]={10,20,30,40,50,60};
    char letter[]={'A','B','C','D','E'};
    char name[]="Renu Prakash";

    int sizen=sizeof(number)/sizeof(number[0]); //sizeof per integer is 4;

    for (int i=0;i<sizen;i++) {
        printf("%d ",number[i]);
    }printf("\n");
    for (int i=0;i<sizeof(letter);i++) {  //sizeof per letter / char is 1;
        printf("%c ",letter[i]);
    }printf("\n");
    for (int i=0;i<sizeof(name)-1;i++) { //sizeof(name) will give the (actuacl size +1) for \0 in the string  at the last
        printf("%c ",name[i]);
    }
}