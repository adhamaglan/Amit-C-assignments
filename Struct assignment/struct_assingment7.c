#include <stdio.h>

typedef struct{
    float price;
    int quantity;
}product;
int main (){
    product x;
    printf("Write the product price and quantity :\n");
    scanf(" %f %d",&x.price,&x.quantity);
    printf("The total cost is : %.2f",x.price*x.quantity);
    return 0;
}