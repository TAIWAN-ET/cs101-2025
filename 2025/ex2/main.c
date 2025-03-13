#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct employee {
    int id;
    int age;
    float salary;
    char name[10];
} Employee_t;

void emp_info(Employee_t emp) {
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);
    printf("Age: %d\n", emp.age);
    printf("\n");
}

int emp_avg_age(Employee_t emp[], int n) {
    int sum = 0;
    for (size_t i = 0; i < 3; i++)
    {
        sum += emp[i].age;
    }
    return sum/3;
} 

void emp_writefile(Employee_t emp[], int n) {
    FILE *fp;
    fp = fopen("employee.bin", "wb+");
    for(int i = 0; i < n; i++) {
        fwrite(&emp[i], sizeof(Employee_t), 1, fp);
    }
    fclose(fp);
    return;
}

void emp_readfile(Employee_t emp[], int n) {
    FILE *fp;
    fp = fopen("employee.bin", "rb");
    for(int i = 0; i < n; i++) {
        fread(emp+i, sizeof(Employee_t), 1, fp);
    }
    fclose(fp);
    return;
    
}

int main() {
    Employee_t emp[3];
    emp[0].id = 1;
    emp[0].age = 20;
    emp[0].salary = 30000.0;
    strcpy(emp[0].name, "John");

    emp[1].id = 2;
    emp[1].age = 26;
    emp[1].salary = 36000.0;
    strcpy(emp[1].name, "Taylor");

    emp[2].id = 3;
    emp[2].age = 31;
    emp[2].salary = 90000.0;
    strcpy(emp[2].name, "Swift");

    int age = emp_avg_age(emp, 3);
    printf("Average age: %d\n", age);
    emp_writefile(emp, 3);
    Employee_t read_emp[10];
    emp_readfile(read_emp, 3);

    for(int i = 0; i < 3; i++) {
        emp_info(read_emp[i]);
    }

}