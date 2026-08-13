#include <stdio.h>

typedef struct{
    char name [20];
    int age;
    float marks;
}student;

student get_student_data (){
    student s1;
    printf("Write student name age and marks\n");
    scanf(" %s %d %f",&s1.name,&s1.age,&s1.marks);
    return s1;
}
int main (){
    student stu = get_student_data();
    printf("student data: \nname: %s\nage: %d\nmarks :%.2f\n",stu.name,stu.age,stu.marks);
    return 0;
}