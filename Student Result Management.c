#include <stdio.h>

void merge(int a[], int l, int m, int h)
{
    int i = l;
    int j = m + 1;
    int k = 0;

    int temp[h - l + 1];

    while (i <= m && j <= h)
    {
        if (a[i] <= a[j])
        {
            temp[k++] = a[i++];
        }
        else
        {
            temp[k++] = a[j++];
        }
    }

    while (i <= m)
    {
        temp[k++] = a[i++];
    }

    while (j <= h)
    {
        temp[k++] = a[j++];
    }

    for (i = l, k = 0; i <= h; i++, k++)
    {
        a[i] = temp[k];
    }
}

void mergeSort(int a[], int l, int h)
{
    if (l < h)
    {
        int m = l + (h - l) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, h);
        merge(a, l, m, h);
    }
}

int main()
{
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n];

    printf("Enter the marks:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }

    mergeSort(marks, 0, n - 1);

    printf("\nSorted Marks (Ascending):\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", marks[i]);
    }

    return 0;
}
