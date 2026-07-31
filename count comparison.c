#include<stdio.h>

int comparisons = 0;

//Iterative Binary Search With Count
int iterativeBinarySearchWithCount(int numbers[], int size, int target)
{
    int left = 0;
    int right = size - 1;
    while(left <= right)
    {
        int middle = (left + right) / 2;
        comparisons = comparisons + 1;
        if(numbers[middle] == target)
        {
            return middle;
        }
        comparisons = comparisons + 1;
        if(numbers[middle] < target)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }
    return -1;
}

//Recursive Binary Search With Count
int recursiveBinarySearchWithCount(int numbers[], int left, int right, int target)
{
    if(left > right)
    {
        return -1;
    }
    int middle = (left + right) / 2;
    comparisons = comparisons + 1;
    if(numbers[middle] == target)
    {
        return middle;
    }
    comparisons = comparisons + 1;
    if(numbers[middle] < target)
    {
        return recursiveBinarySearchWithCount(numbers, middle+1, right, target);
    }
    return recursiveBinarySearchWithCount(numbers, left, middle-1, target);
}

int main()
{
    int size;
    printf("Array Size: ");
    scanf("%d", &size);
    int numbers[size];
    printf("Elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &numbers[i]);
    }
    int target;
    printf("Target: ");
    scanf("%d", &target);

    int iterativeResult = iterativeBinarySearchWithCount(numbers, size, target);
    if(iterativeResult != -1)
    {
        printf("\nIterative Binary Search:\n");
        printf("Element found at index %d\n", iterativeResult);
    }
    else
    {
        printf("\nIterative Binary Search:\n");
        printf("Element not found\n");
    }
    printf("Number of comparisons: %d\n", comparisons);

    comparisons = 0;

    //Recursive Binary Search With Count
    int recursiveResult = recursiveBinarySearchWithCount(numbers, 0, size-1, target);
    if(recursiveResult != -1)
    {
        printf("\nRecursive Binary Search:\n");
        printf("Element found at index %d\n", recursiveResult);
    }
    else
    {
        printf("\nRecursive Binary Search:\n");
        printf("Element not found\n");
    }
    printf("Number of comparisons: %d\n", comparisons);

    return 0;
}
