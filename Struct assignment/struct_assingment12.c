#include <stdio.h>

typedef struct{
    int day, month, year;
}date;
int main(){
    date x,y;
    printf("Date 1 Write day:\n");
    scanf(" %d",&x.day);
    printf("Write month:\n");
    scanf(" %d",&x.month);
    printf("Write year:\n");
    scanf(" %d",&x.year);
    printf("Date 2 Write day:\n");
    scanf(" %d",&y.day);
    printf("Write month:\n");
    scanf(" %d",&y.month);
    printf("Write year:\n");
    scanf(" %d",&y.year);
    if(x.year<y.year||(x.year==y.year&&x.month<y.month)||(x.year==y.year&&x.month==y.month&&x.day<y.day)){
            printf("Date 1 is earlier. The date is :\n%d//%d//%d",x.day,x.month,x.year);
    }else if(x.year==y.year&&x.month==y.month&&x.day==y.day){
            printf("Both dates are the same. The date is :\n%d//%d//%d",x.day,x.month,x.year);
        }else{
        printf("Date 2 is earlier. The date is :\n%d//%d//%d",y.day,y.month,y.year);
    }
    return 0;
}