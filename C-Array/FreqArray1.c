#include <stdio.h>

int main() {
    int a[100], b[100] = {0}; 
    int i, j, limit, count;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Enter elements in the array: ");
    for (i = 0; i < limit; i++) {
        scanf("%d", &a[i]);
    }

    printf("Elements are: ");
    for (i = 0; i < limit; i++) {
        printf("%d ", a[i]);
    }

    for (i = 0; i < limit; i++) {
        count = 1; 
        for (j = i + 1; j < limit; j++) {
            if (a[i] == a[j]) {
                count++;
                b[j] = -1; 
            }
        }
        if (b[i] != -1) {
            b[i] = count;
        }
    }
    printf("\nFrequency of elements in the array:\n");
    for (i = 0; i < limit; i++) {
        if (b[i] != -1) {
            printf("Frequency of %d is: %d\n", a[i], b[i]);
        }
    }
}
