#include <stdio.h>

int main()
{
    int n, i, j;
    int id[100], score[100], temp;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter Student ID and Score:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d %d", &id[i], &score[i]);
    }

    // Bubble Sort (Descending by Score)
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(score[j] < score[j + 1])
            {
                temp = score[j];
                score[j] = score[j + 1];
                score[j + 1] = temp;

                temp = id[j];
                id[j] = id[j + 1];
                id[j + 1] = temp;
            }
        }
    }

    printf("\nRank\tStudent ID\tScore\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%d\t\t%d\n", i + 1, id[i], score[i]);
    }

    return 0;
}
