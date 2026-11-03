#include <stdio.h>

int main() {
    int arr[5] = {1,2,3,4,5};
    for (int x = 0; x < 5 ; x++ ) {
        int *ptr = &arr[x];
        printf("%p\n", (int *)ptr);
    }
}