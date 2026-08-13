#include <stdio.h>

typedef struct {
    char name [20];
    float price;
}book;
int main (){
    float p=0; 
    int l=0;
    book arr[5];
    for(int i=0;i<5;i++){
        printf("Write the name and price of book %d\n",i+1);
        scanf(" %s %f",&arr[i].name,&arr[i].price);
    }
    printf("book price budget?\n");
    scanf(" %f",&p);
    for(int i=0;i<5;i++){
        if(p<=arr[i].price){
            l++;
            printf("book %d\nname : %s price : %.2f\n",l,arr[i].name,arr[i].price);
        }
    }
    return 0;
}