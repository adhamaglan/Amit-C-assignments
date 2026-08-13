#include <stdio.h>

typedef struct{
    char name [20];
    int age, roll;
    float marks;
}student;
int main (){
    int r=0, max=0;
    student arr [5];
    for(int i=0;i<5;i++){
        printf("Write student%d name age marks and roll number\n",i+1);
        scanf(" %s %d %f %d",&arr[i].name,&arr[i].age,&arr[i].marks,&arr[i].roll);
        }
    printf("\nstudent roll number?\n");
    scanf(" %d",&r);
    for(int i=0;i<5;i++){
        if(arr[i].roll==r){
            printf("student%d \nname: %s age: %i marks: %.2f roll: %d",i+1,arr[i].name,arr[i].age,arr[i].marks,arr[i].roll);
            break;
        }
    }
    return 0;
}