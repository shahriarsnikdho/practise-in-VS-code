#include<stdio.h>

// Iterative Binary Search
int iterativeBinarySearch(int numbers[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while(left <= right)
    {
        int middle = (left + right) / 2;

        if(numbers[middle] == target)
        {
            return middle;
        }
        else if(numbers[middle] < target)
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

//Recursive Binary Search
int recursiveBinarySearch(int numbers[], int left, int right, int target){
    if(left>right){
        return -1;
    }
    int middle=(left+right)/2;

    if(numbers[middle] == target){
        return middle;
    }
    if(numbers[middle]<target){
        return recursiveBinarySearch(numbers, middle+1, right, target);
    }
    return recursiveBinarySearch(numbers, left, middle-1, target);

}

int main()
{
    int size;

    printf("Enter The Number of elements: ");
    scanf("%d", &size);

    int numbers[size];

    printf("Enter %d elements in sorted order:\n", size);

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int target;

    printf("Enter the number to search: ");
    scanf("%d", &target);

    int iterativeResult = iterativeBinarySearch(numbers, size, target);

    //Recursive Binary Search
    int recursiveResult = recursiveBinarySearch(numbers, 0, size-1, target);
    if(recursiveResult!=-1){
        printf("\nRecursive Binary Search: \n");
        printf("\nElements found at index %d\n", recursiveResult);
    }
    else{
        printf("\nRecursive Binary Search: \n");
        printf("\nElements not found. \n");
    }

    if(iterativeResult != -1)
    {
        printf("\nIterative Binary Search:\n");
        printf("Element found at Index %d\n", iterativeResult);
    }
    else
    {
        printf("\nIterative Binary Search:\n");
        printf("Element not found\n");
    }

    return 0;
}

