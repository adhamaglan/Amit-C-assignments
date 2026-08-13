#include <stdio.h>

typedef struct{
    int km, m, cm;
}distance;
int main(){
    distance x, y, t;
    printf("Write distance 1 in km, m, cm :\n");
    scanf(" %d %d %d",&x.km,&x.m,&x.cm);
    printf("Write distance 2 in km, m, cm :\n");
    scanf(" %d %d %d",&y.km,&y.m,&y.cm);
    t.km=x.km+y.km;
    t.m=x.m+y.m;
    t.cm=x.cm+y.cm;
    if(t.cm>=100){
       t.m+=t.cm/100;
       t.cm=t.cm%100;
    }
    if(t.m>=1000){
       t.km+=t.m/1000;
       t.m=t.m%1000;
    }
    printf("distance is \nkm:%d  m:%d  cm:%d",t.km,t.m,t.cm);
    return 0;
}