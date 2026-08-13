#include <stdio.h>

typedef struct {
    char name[50];
    float balance;
}bank_acc;

int main(){
    bank_acc acc1;
    int op=0;
    float x;
    printf("Write you bank account details (name and balance)\n");
    scanf(" %s %f",&acc1.name,&acc1.balance);
    printf("What operation you want to do:\n1-deposit\n2-withdraw\n3-balance\n");
    scanf(" %d",&op);
    if(op!=3){
    printf("wtite the ammount\n");
    scanf(" %f",&x);
    }
    if(op==2&&x>acc1.balance){
        printf("insufficient balance");
    }else{
        switch (op){
        case 1:
        acc1.balance+=x;
        printf("details are:\n name: %s\nbalance: %.2f\n",acc1.name,acc1.balance);
        break;
        case 2:
        acc1.balance-=x;
        printf("details are:\n name: %s\nbalance: %.2f\n",acc1.name,acc1.balance);
        break;
        case 3:
        printf("details are:\n name: %s\nbalance: %.2f\n",acc1.name,acc1.balance);
        break;
        default:
        printf("invalid op");
        break;
        }
    }
    return 0;
}