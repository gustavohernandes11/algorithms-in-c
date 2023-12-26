#include<stdio.h>
#include "utils/print_array.h"
#include "src/insertion_sort.h"
#include "src/selection_sort.h"
#include "src/merge_sort.h"


int main() {
    int numbers[] = {1, 3, 2, 4, 7, 0};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    int* result = selection_sort(numbers, length);
    print_array(result, length);
}
