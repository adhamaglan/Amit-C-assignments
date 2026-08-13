#include <stdio.h>

typedef struct{
    float x,y;
}point;
point p;
void print_point (point a){
    printf("(%.2f,%.2f)\n",a.x,a.y);
}
int main (){
    printf("write your point\n");
    scanf(" %f %f",&p.x,&p.y);
    print_point(p);
    return 0;
}