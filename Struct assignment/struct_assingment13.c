#include <stdio.h>
typedef struct {
    char city [50];
    int street_num;
}adress;
typedef struct{
    char name [20];
    int age;
    float marks;
    adress adr;
}student;
int main (){
    student s1;
    printf ("Write student details (name, age, marks, city, street number)\n");
    scanf (" %s %d %f %s %d",&s1.name,&s1.age,&s1.marks,&s1.adr.city,&s1.adr.street_num);
    printf ("student name: %s\nadress: %s\nstreet: %d\nage: %d\nmarks: %.2f\n",s1.name,s1.adr.city,s1.adr.street_num,s1.age,s1.marks);
    return 0;
}