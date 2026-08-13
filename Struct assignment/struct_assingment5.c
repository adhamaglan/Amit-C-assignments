#include <stdio.h>

typedef struct{
    char name [20];
    int age;
    float marks;
}student;
int main (){
    float tot=0;
    student arr [5];
    for(int i=0;i<5;i++){
        printf("Write student%d name age and marks\n",i+1);
        scanf(" %s %d %f",&arr[i].name,&arr[i].age,&arr[i].marks);
        }
    for(int i=0;i<5;i++){
        tot+=arr[i].marks;
    }
    printf("the avg is : %.2f",tot/5);
    return 0;
}