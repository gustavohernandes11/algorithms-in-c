#include <stdio.h>
#include "src/insertion_sort.h"
#include "src/selection_sort.h"
#include "src/merge_sort.h"
#include "src/bubble_sort.h"
#include "utils/print_array.h"

int main()
{
    int unsorted[] = {666, 1, 2, 3, 4, 5, 6};
    int length = sizeof(unsorted) / sizeof(unsorted[0]);

    bubble_sort(unsorted, length);
    print_array(unsorted, length);
}
