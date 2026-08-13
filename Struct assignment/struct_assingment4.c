#include <stdio.h>

typedef struct{
    char name [20];
    int age;
    float marks;
}student;
int main (){
    int idx=0, max=0;
    student arr [5];
    for(int i=0;i<5;i++){
        printf("Write student%d name age and marks\n",i+1);
        scanf(" %s %d %f",&arr[i].name,&arr[i].age,&arr[i].marks);
        }
    for(int i=0;i<5;i++){
        if(arr[i].marks>max){
            max=arr[i].marks;
            idx=i;
        }
    }
    printf("\nStudent with highest marks : %s with total of %.2f\n",arr[idx].name,arr[idx].marks);
    return 0;
}