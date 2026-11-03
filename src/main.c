#include <stdio.h>

#include "../include/printer.h"

int main() {
    typedef int Integer;
    Integer arr[5] = {1,2,3,4,5};
    for (int x = 0; x < 5 ; x++ ) {
        int *ptr = &arr[x];
        printf("%p\n", (void *)ptr);
    }
    print();
    return 0;
}