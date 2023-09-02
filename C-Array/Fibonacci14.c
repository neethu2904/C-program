

#include <stdio.h>

int fibonacci(int size) {
    if (size <= 1) {
        return size;
    } else {
        return fibonacci(size - 1) + fibonacci(size - 2);
    }
}

int main() {
    int size;
    printf("Enter a positive integer :");
    scanf("%d", &size);

    if (size < 0) {
        printf("Invalid input\n");
    } else {
        int result = fibonacci(size);
        printf("TheFibonacci number is: %d\n", result);
    }
}

