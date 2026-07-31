#include <stdio.h>

void merge(int a[], int l, int m, int h)
{
    int i = l;
    int j = m + 1;
    int k = 0;

    int temp[h - l + 1];

    while (i <= m && j <= h)
    {
        if (a[i] >= a[j])
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

    printf("Enter the number of orders: ");
    scanf("%d", &n);

    int order[n];

    printf("Enter the order values:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &order[i]);
    }

    mergeSort(order, 0, n - 1);

    printf("\nSorted Order Values (Descending):\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", order[i]);
    }

    printf("\n\nTop 3 Highest Order Values:\n");

    if(n >= 3)
    {
        printf("%d %d %d", order[0], order[1], order[2]);
    }
    else
    {
        for(i = 0; i < n; i++)
        {
            printf("%d ", order[i]);
        }
    }

    return 0;
}
