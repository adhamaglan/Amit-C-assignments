#include <stdio.h>

typedef struct{
    char name [20];
    int age;
    float marks;
}student;
int main (){
    student s1;
    student *ptr= &s1;
    printf("Write student name age and marks\n");
    scanf(" %s %d %f",&ptr->name,&ptr->age,&ptr->marks);
    printf("student data: \nname: %s\nage: %d\nmarks :%.2f\n",s1.name,s1.age,s1.marks);
    return 0;
}