#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j;
    char product[100][50], tempName[50];
    int price[100], tempPrice;

    printf("Enter number of products: ");
    scanf("%d", &n);

    printf("Enter Product Name and Price:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%s %d", product[i], &price[i]);
    }
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(price[j] > price[j + 1])
            {
                tempPrice = price[j];
                price[j] = price[j + 1];
                price[j + 1] = tempPrice;

                strcpy(tempName, product[j]);
                strcpy(product[j], product[j + 1]);
                strcpy(product[j + 1], tempName);
            }
        }
    }

    printf("\nProducts Sorted by Price\n");

    for(i = 0; i < n; i++)
    {
        printf("%s\t%d\n", product[i], price[i]);
    }

    return 0;
}
