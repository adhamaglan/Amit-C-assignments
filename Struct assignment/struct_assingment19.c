#include <stdio.h>

typedef struct{
    char name [50];
    int id, salary;
}employee;
int main (){
    employee arr [5];
    for(int i=0;i<5;i++){
        printf("Write employee%d name id and salary\n",i+1);
        scanf(" %s %d %d",&arr[i].name,&arr[i].id,&arr[i].salary);
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            if(arr[j].salary<arr[j+1].salary){
                employee temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Ordered list by salary (descending)\n");
    for(int i=0;i<5;i++){
        printf("Name: %s\nId: %d\nSalary: %d\n\n",arr[i].name,arr[i].id,arr[i].salary);
    }
    return 0;
}