#include <stdio.h>

void call_by_value(int x) {
    x = x + 10;
    printf("Inside call_by_value function: x = %d\n", x);
}

void call_by_reference(int* x) {
    *x = *x + 10;
    printf("Inside call_by_reference function: x = %d\n", *x);
}

int main() {
    int num = 5;

    call_by_value(num);
    printf("After call_by_value function: num = %d\n", num);

    call_by_reference(&num);
    printf("After call_by_reference function: num = %d\n", num);

    return 0;
}

