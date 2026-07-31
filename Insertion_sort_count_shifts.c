#include <stdio.h>
int main()
{
    int n, i, j, key;
    int comparisons = 0, shifts = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while(j >= 0)
        {
            comparisons++;
            if(arr[j] > key)
            {
                arr[j + 1] = arr[j];
                shifts++;
                j--;
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = key;
    }
    printf("\nSorted Array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\nTotal Comparisons: %d", comparisons);
    printf("\nTotal Shifts: %d\n", shifts);
    return 0;
}
