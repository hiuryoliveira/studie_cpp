#include <stdio.h>

/**
 * @brief Performs binary search on a sorted array of items.
 *
 * @param items The array of items to search in.
 * @param target The target value to search for.
 * @return The index of the target value if found, -1 otherwise.
 */
int binary_search(long items[], int target)
{
    int left = 0;
    int right = target - 1;
    while (left <= right)
    {
        int middle = left + (right - left) / 2;
        if (items[middle] == target)
        {
            return middle;
        }

        if (items[middle] < target)
        {
            left = middle + 1;
        }

        if (items[middle] > target)
        {
            right = middle - 1;
        }
    }

    return -1;
}

int main(int argc, char const *argv[])
{
    int lowerBound = 1;
    int upperBound = 1000000;
    int size = upperBound - lowerBound + 1;
    long items[size];

    for (int i = 0; i < size; i++)
    {
        items[i] = lowerBound + i;
    }

    int target = 117;
    int result = binary_search(items, target);
    printf("The index of the target is: %d\n", result);
    return 0;
}
