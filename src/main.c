#include <stdio.h>

void print() {
    int age = 25;
    float salary = 5000.0f;
    char grade = 'A';
    printf("\n");
    printf("Age: %d \n", age);
    printf("Salary: %2f \n", salary);
    printf("Grade: %s \n", grade);
}

int main() {
    typedef int Integer;
    Integer arr[5] = {1,2,3,4,5};
    for (int x = 0; x < 5 ; x++ ) {
        int *ptr = &arr[x];
        printf("%p\n", ptr);
    }
    print();
}