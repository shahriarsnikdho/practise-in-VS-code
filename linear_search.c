#include<stdio.h>
int IterativeLinearSearch(int numbers[], int size, int target)
{
    for(int i=0; i<size; i++)
    {
        if(numbers[i]==target)
        {
            return i;
        }
    }
    return -1;
}
int recursiveLinearSearch(int numbers[], int size, int target, int currentIndex)
{
    if(currentIndex>=size)
    {
        return -1;
    }
    else if(numbers[currentIndex]==target)
    {
        return currentIndex;
    }
    else
        return recursiveLinearSearch(numbers, size, target,currentIndex+1);
}
int main()
{
    int size;
    printf("Enter The Number of elements: ");
    scanf("%d", &size);
    int numbers[size];
    printf("Enter %d elements: \n", size);
    for(int i=0; i<size; i++)
    {
        scanf("%d", &numbers[i]);
    }
    int target;
    printf("Enter the number to search: ");
    scanf("%d", &target);
// Iterative Search
    int IterativeResult = IterativeLinearSearch(numbers, size,
                          target);
    if(IterativeResult != -1)
        printf("Iterative Search : Element Found at index %d\n",
               IterativeResult);
    else
        printf("Iterative Search : Element not Found\n");
// Recursive Search
    int recursiveResult = recursiveLinearSearch(numbers, size,
                          target, 0);
    if(recursiveResult != -1)
        printf("Recursive Search : Element Found at index %d\n",
               recursiveResult);
    else
        printf("Recursive Search : Element not Found\n");
}
