#include <stdio.h>
#include<math.h>
int main() {
    int x=9;
    x=sqrt(x); // 3
    x=pow(x,3); // 27
    printf("%d\n", x);

    float a=19.76;
    //a=round(a); //20.000000
    //a=ceil(a); //20.000000
    a=floor(a); //19.000000
    printf("%f\n", a);

    float q=45;
    //q=sin(q); //0.850904
    //q=cos(q); //0.525322
    q=tan(q); //1.619775
    printf("%f\n", q);
}