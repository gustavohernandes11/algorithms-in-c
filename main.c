#include<stdio.h>
#include "insertion_sort.h"
#include "selection_sort.h"
#include "merge_sort.h"

void print_array(int array[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int numbers[] = {1, 3, 2, 4, 7, 0};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    int* result = selection_sort(numbers, length);
    print_array(result, length);
    
}
