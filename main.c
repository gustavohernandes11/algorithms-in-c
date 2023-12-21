#include<stdio.h>
#include "insertion_sort.h"


int main() {
    int numbers[] = {1, 3, 2, 4, 7, 0};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    int* result = insetion_sort(numbers, length);

    printf("sorted: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result);
}
