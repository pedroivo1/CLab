#include <stddef.h>
#include <sys/types.h>

void merge(int arr[], size_t start, size_t middle, size_t end)
{

    size_t left_size = middle - start + 1;
    size_t right_size = end - middle;

    int left_arr[left_size], right_arr[right_size];

    for (size_t i = 0; i < left_size; i++)
    {
        left_arr[i] = arr[start + i];
    }
    for (size_t i = 0; i < right_size; i++)
    {
        right_arr[i] = arr[middle + 1 + i];
    }

    size_t i = 0;
    size_t j = 0;
    size_t k = start;
    while (i < left_size && j < right_size)
    {
        if (left_arr[i] <= right_arr[j])
        {
            arr[k] = left_arr[i];
            i++;
        }
        else
        {
            arr[k] = right_arr[j];
            j++;
        }
        k++;
    }

    while (i < left_size)
    {
        arr[k] = left_arr[i];
        i++;
        k++;
    }

    while (j < right_size)
    {
        arr[k] = right_arr[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[], size_t start, size_t end)
{
    if (start < end)
    {
        size_t middle = start + (end - start) / 2;

        merge_sort(arr, start, middle);
        merge_sort(arr, middle + 1, end);

        merge(arr, start, middle, end);
    }
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

ssize_t partition(int arr[static 1], ssize_t left, ssize_t right)
{
    ssize_t i = left;

    for (ssize_t j = left; j < right; ++j)
    {
        if (arr[j] < arr[right])
        {
            swap(&arr[i], &arr[j]);
            ++i;
        }
    }
    swap(&arr[i], &arr[right]);
    return i;
}

void quick_sort(int arr[static 1], ssize_t left, ssize_t right)
{
    if (left < right)
    {
        ssize_t pi = partition(arr, left, right);
        quick_sort(arr, left, pi - 1);
        quick_sort(arr, pi + 1, right);
    }
}
