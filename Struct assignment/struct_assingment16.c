#include <stdio.h>

typedef struct{
    char name [50];
    int id, salary,experience_yrs;
}employee;

void Salary_bonus (employee *a){
    if(a->experience_yrs>=5){
        a->salary+=2500;
    }
}
int main (){
    employee e1;
    printf("Write emplyee1 name id salary and experience years\n");
    scanf(" %s %d %d %d",&e1.name,&e1.id,&e1.salary,&e1.experience_yrs);
    Salary_bonus(&e1);
    printf("\nemployee1\nname : %s\nid : %d\nsalary : %d\n",e1.name,e1.id,e1.salary);
    return 0;
}