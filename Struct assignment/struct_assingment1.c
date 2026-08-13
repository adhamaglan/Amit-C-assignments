#include <stdio.h>

typedef struct {
int roll;
char name[20];
float marks;
}student;
int main(){
    student st1;
    printf("write the student's roll number, name, and marks\n");
    scanf(" %d %s %f",&st1.roll,&st1.name,&st1.marks);
    printf("\nStudent name: %s\nroll number: %d marks: %.2f",st1.name,st1.roll,st1.marks);
    return 0;
}