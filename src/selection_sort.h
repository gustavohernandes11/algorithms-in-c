#include <stdio.h>
#include <stdlib.h>
#include "../utils/swap.h"

int* selection_sort(int numbers[], int length){
    int min_index, i, j;
    for (int i = 0; i < length-1; i++)
    {
        min_index = i;
        for (int j = min_index; j < length; j++)
        {
            if (numbers[min_index] > numbers[j]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            swap(&numbers[i], &numbers[min_index]);
        }
    }
    return numbers;
};
