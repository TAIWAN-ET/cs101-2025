#include <stdio.h>
#include <stdlib.h>

typedef struct employee {
    int id;
    char name[10];
    float salary;
} Employee_t;

int main() {
    printf("Size of Employee_t: %lu\n", sizeof(Employee_t));
}
