#include <stdio.h>

#include "../include/printer.h"

void print() {
    int age = 25;
    float salary = 5000.0f;
    char grade = 'A';
    printf("\n");
    printf("Age: %d \n", age);
    printf("Salary: %2f \n", salary);
    printf("Grade: %c \n", grade);
}