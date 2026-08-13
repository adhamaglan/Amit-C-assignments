#include <stdio.h>

typedef struct{
    int day, month, year;
}date;
int main(){
    date x;
    printf("Write day:\n");
    scanf(" %d",&x.day);
    printf("Write month:\n");
    scanf(" %d",&x.month);
    printf("Write year:\n");
    scanf(" %d",&x.year);
    printf("The date is :\n%d//%d//%d",x.day,x.month,x.year);
    return 0;
}