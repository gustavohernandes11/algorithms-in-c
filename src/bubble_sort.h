#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void bubble_sort(int numbers[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                swap(&numbers[j], &numbers[j + 1]);
            }
        }
    }
};

void bubble_sort_optimized(int numbers[], int length)
{
    bool swapped;
    for (int i = 0; i < length - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < length - i - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                swap(&numbers[j], &numbers[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
};

void bubble_sort_recursive(int numbers[], int length)
{
    if (length < 1)
        return;
    for (int i = 0; i < length - 1; i++)
    {
        if (numbers[i] > numbers[i + 1])
        {
            swap(&numbers[i], &numbers[i + 1]);
        }
    }
    bubble_sort_recursive(numbers, length - 1);
};

void bubble_sort_experimental(int numbers[], int length)
{
    int first_item = numbers[0];
    for (int i = 0; i < length - 1; i++)
    {
        printf("%d° iteration \n", i + 1);
        for (int j = 0; j < length - i - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                if (first_item == numbers[j])
                {
                    printf("the first item %d swap position with %d \n", first_item, numbers[j + 1]);
                }
                swap(&numbers[j], &numbers[j + 1]);
            }
        }
    }
};
