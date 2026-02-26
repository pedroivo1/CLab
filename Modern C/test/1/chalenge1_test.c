#include <limits.h>
#include "test/unity/unity.h"
#include "code/1/chalenge1.c"

void setUp() {}

void tearDown() {}

void test_merge_sort_only_small_positives()
{
    int arr[7] = {3, 5, 4, 1, 9, 7, 6};
    int expected[7] = {1, 3, 4, 5, 6, 7, 9};

    merge_sort(arr, 0, 6);

    TEST_ASSERT_EQUAL_INT_ARRAY(expected, arr, 7);
}

void test_merge_sort_min_and_max_values()
{
    int arr[5] = {INT_MAX, 0, INT_MIN, 42, -1};
    int expected[5] = {INT_MIN, -1, 0, 42, INT_MAX};

    merge_sort(arr, 0, 4);

    TEST_ASSERT_EQUAL_INT_ARRAY(expected, arr, 5);
}

void test_merge_sort_duplicate_values(void)
{
    int arr[7] = {4, 2, 4, 7, 1, 4, 2};
    int expected[7] = {1, 2, 2, 4, 4, 4, 7};

    merge_sort(arr, 0, 6);

    TEST_ASSERT_EQUAL_INT_ARRAY(expected, arr, 7);
}

void test_merge_sort_already_sorted(void)
{
    int arr[5] = {10, 20, 30, 40, 50};
    int expected[5] = {10, 20, 30, 40, 50};

    merge_sort(arr, 0, 4);

    TEST_ASSERT_EQUAL_INT_ARRAY(expected, arr, 5);
}

void test_merge_sort_reverse_sorted(void)
{
    int arr[5] = {50, 40, 30, 20, 10};
    int expected[5] = {10, 20, 30, 40, 50};

    merge_sort(arr, 0, 4);

    TEST_ASSERT_EQUAL_INT_ARRAY(expected, arr, 5);
}

void test_merge_sort_single_element(void)
{
    int arr[1] = {42};
    int expected[1] = {42};

    merge_sort(arr, 0, 0);

    TEST_ASSERT_EQUAL_INT_ARRAY(expected, arr, 1);
}

void test_quick_sort_only_small_positives()
{
    int arr[7] = {3, 5, 4, 1, 9, 7, 6};
    int expected[7] = {1, 3, 4, 5, 6, 7, 9};

    quick_sort(arr, 0, 6);

    TEST_ASSERT_EQUAL_INT_ARRAY(expected, arr, 7);
}

void test_quick_sort_min_and_max_values()
{
    int arr[5] = {INT_MAX, 0, INT_MIN, 42, -1};
    int expected[5] = {INT_MIN, -1, 0, 42, INT_MAX};

    quick_sort(arr, 0, 4);

    TEST_ASSERT_EQUAL_INT_ARRAY(expected, arr, 5);
}

void test_quick_sort_duplicate_values(void)
{
    int arr[7] = {4, 2, 4, 7, 1, 4, 2};
    int expected[7] = {1, 2, 2, 4, 4, 4, 7};

    quick_sort(arr, 0, 6);

    TEST_ASSERT_EQUAL_INT_ARRAY(expected, arr, 7);
}

void test_quick_sort_already_sorted(void)
{
    int arr[5] = {10, 20, 30, 40, 50};
    int expected[5] = {10, 20, 30, 40, 50};

    quick_sort(arr, 0, 4);

    TEST_ASSERT_EQUAL_INT_ARRAY(expected, arr, 5);
}

void test_quick_sort_reverse_sorted(void)
{
    int arr[5] = {50, 40, 30, 20, 10};
    int expected[5] = {10, 20, 30, 40, 50};

    quick_sort(arr, 0, 4);

    TEST_ASSERT_EQUAL_INT_ARRAY(expected, arr, 5);
}

void test_quick_sort_single_element(void)
{
    int arr[1] = {42};
    int expected[1] = {42};

    quick_sort(arr, 0, 0);

    TEST_ASSERT_EQUAL_INT_ARRAY(expected, arr, 1);
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_merge_sort_only_small_positives);
    RUN_TEST(test_merge_sort_min_and_max_values);
    RUN_TEST(test_merge_sort_duplicate_values);
    RUN_TEST(test_merge_sort_already_sorted);
    RUN_TEST(test_merge_sort_reverse_sorted);
    RUN_TEST(test_merge_sort_single_element);
    printf("\n");
    // RUN_TEST(test_quick_sort_only_small_positives);
    // RUN_TEST(test_quick_sort_min_and_max_values);
    // RUN_TEST(test_quick_sort_duplicate_values);
    // RUN_TEST(test_quick_sort_already_sorted);
    // RUN_TEST(test_quick_sort_reverse_sorted);
    // RUN_TEST(test_quick_sort_single_element);

    return UNITY_END();
}
