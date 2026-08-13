#include <stdio.h>
#include <string.h>
struct employee {
    char name [50];
    int id, salary;
};

int main (){
    struct employee e1;
    e1.name;
    e1.id;
    e1.salary;
    printf("Write emplyee1 name id and salary\n");
    scanf(" %s %d %d",&e1.name,&e1.id,&e1.salary);
    printf("\nemployee1\nname : %s\nid : %d\nsalary : %d\n",e1.name,e1.id,e1.salary);
    return 0;
}