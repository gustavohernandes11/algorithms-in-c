#include <stdio.h>
#include "src/insertion_sort.h"
#include "src/selection_sort.h"
#include "src/merge_sort.h"

int main()
{
    int unsorted[] = {1, 1, 1, 1, 3, 0, 0, 2, 4, 1000, 1, 7, 0, 1, 3};
    int sorted[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int reverse[] = {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    int length = sizeof(unsorted) / sizeof(unsorted[0]);

    merge_sort(unsorted, 0, length - 1);
    print_array(unsorted, length);
}
