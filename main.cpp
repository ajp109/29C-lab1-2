#include "mbed.h"

int main() {

    int number = 10;

    int *pointer = &number;

    printf("Number is %d, stored at address %p\n", number, &number);
    printf("Pointer is %p, target value is %d\n", pointer, *pointer);

    *pointer = 12;

    printf("Number is %d, stored at address %p\n", number, &number);
    printf("Pointer is %p, target value is %d\n", pointer, *pointer);

    while (true) {
        sleep();
    }
}
