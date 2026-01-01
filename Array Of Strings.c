#include<stdio.h>
int main() {
    char fruits[][10]={"Apple","Banana","Orange","Grape","Papaya"};
    for (int i=0;i<5;i++) {
        printf("%s \n",fruits[i]);
    }
}