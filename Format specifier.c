#include<stdio.h>
int main() {
    char name[]="Selva";
    char gender='M';
    int age=19;
    float price=29.99;
    double pi=3.1415926535;
    printf("%s\n",name);
    printf("%c\n",gender);
    printf("%d\n",age);
    printf("%f\n",price);
    printf("%lf\n",pi);
    printf("\n");

    //width
    int num1=1;
    int num2=10;
    int num3=100;

    printf("%3d\n",num1);   //**1
    printf("%3d\n",num2);   //*10
    printf("%3d\n",num3);   //100
    printf("\n");

    printf("%-3d\n",num1);  //1**
    printf("%-3d\n",num2);  //10*
    printf("%-3d\n",num3);  //100
    printf("\n");

    printf("%04d\n",num1);  //0001
    printf("%04d\n",num2);  //0010
    printf("%04d\n",num3);  //0100
    printf("\n");

    int num4=-100;
    printf("%+d\n",num1);  //+1
    printf("%+d\n",num2);  //+10
    printf("%+d\n",num3);  //+100
    printf("%+d\n",num4);  //-100
    printf("\n");

    //precision
    float price1=19.99;
    float price2=1.50;
    float price3=-100.00;

    printf("%.2f\n",price1);  //19.99
    printf("%.2f\n",price2);  //1.50
    printf("%.2f\n",price3);  //-100.00
    printf("\n");


    //flags
    printf("%7.2f\n",price1);  //**19.99
    printf("%7.2f\n",price2);  //***1.50
    printf("%7.2f\n",price3);  //-100.00


}