#include <stddef.h>

void merge(int arr[static 1], size_t left, size_t middle, size_t right)
{
    size_t l_len = middle;
    size_t r_len = right - middle;

    int l_arr[l_len];
    int r_arr[r_len];

    size_t l_idx = left;
    size_t r_idx = middle + 1;
}

void merge_sort(int arr[static 1], size_t left, size_t right)
{
    if (left < right)
    {
        size_t middle = left + (right - left) / 2;
        merge_sort(arr, left, middle);
        merge_sort(arr, middle + 1, right);
    }
}
