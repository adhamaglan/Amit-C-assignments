#include <stdio.h>

typedef struct{
    float img, real;
}cmplx;
int main (){
    cmplx num1, num2;
    printf("Write complex number 1 imaginary and real\n");
    scanf(" %f %f",&num1.img,&num1.real);
    printf("Write complex number 2 imaginary and real\n");
    scanf(" %f %f",&num2.img,&num2.real);
    printf("The complex number is :\n%.2fi + %.2f",num1.img+num2.img,num1.real+num2.real);
    return 0;
}