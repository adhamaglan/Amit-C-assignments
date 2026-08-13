#include <stdio.h>

typedef struct{
    char name [20];
    int age;
    float marks;
}student;
int main (){
    student arr [5];
    for(int i=0;i<5;i++){
        printf("Write student%d name age and marks\n",i+1);
        scanf(" %s %d %f",&arr[i].name,&arr[i].age,&arr[i].marks);
        }
    for(int i=0;i<5;i++){
        printf("student%d :\n name: %s age: %i marks: %.2f",i+1,arr[i].name,arr[i].age,arr[i].marks); 
        printf("\n");
    }
    return 0;
}