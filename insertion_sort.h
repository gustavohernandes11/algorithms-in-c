#include <stdio.h>
#include <stdlib.h>

int* insetion_sort(int numbers[], int length){
    for (int i = 0; i < length; i++)
    {
        int key = numbers[i];
        int j = i - 1;
        while(j >= 0 && numbers[j] > key) {
            numbers[j + 1] = numbers[j];
            j = j - 1;
        }
        numbers[j + 1] = key;
    }

    return numbers;
};
