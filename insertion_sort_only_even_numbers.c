#include <stdio.h>
int main()
{
    int n, i, j, k = 0, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n], even[n];
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            even[k++] = arr[i];
    }
    for(i = 1; i < k; i++)
    {
        key = even[i];
        j = i - 1;
        while(j >= 0 && even[j] > key)
        {
            even[j + 1] = even[j];
            j--;
        }
        even[j + 1] = key;
    }
    j = 0;
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            arr[i] = even[j++];
        }
    }
    printf("\nArray after sorting even numbers:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
