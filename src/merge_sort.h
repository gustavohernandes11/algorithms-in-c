#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void *merge(int numbers[], int begin, int mid, int end)
{
    int left_size = mid - begin + 1;
    int right_size = end - mid;

    int left[left_size], right[right_size];

    for (size_t i = 0; i < left_size; i++)
    {
        left[i] = numbers[begin + i];
    };

    for (size_t i = 0; i < right_size; i++)
    {
        right[i] = numbers[mid + i + 1];
    };

    int i = 0;     // smallest right index
    int j = 0;     // smallest left index
    int k = begin; // actual list index to be arranged

    while (j < left_size && i < right_size)
    {
        if (left[j] <= right[i])
        {
            numbers[k] = left[j];
            j++;
        }
        else
        {
            numbers[k] = right[i];
            i++;
        }
        k++;
    }

    while (j < left_size)
    {
        numbers[k] = left[j];
        j++;
        k++;
    }

    while (i < right_size)
    {
        numbers[k] = right[i];
        i++;
        k++;
    }
}

void *merge_sort(int numbers[], int begin, int end)
{
    if (begin < end)
    {
        int mid = begin + (end - begin) / 2;
        merge_sort(numbers, begin, mid);
        merge_sort(numbers, mid + 1, end);

        merge(numbers, begin, mid, end);
    }
}
