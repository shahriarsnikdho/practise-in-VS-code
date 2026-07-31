#include<stdio.h>
int main()
{
    int size;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    int numbers[size];
    printf("enter %d elements: \n",size);
    for(int i=0; i<size; i++)
    {
        scanf("%d",&numbers[i]);
    }
//Insertion sort
    for(int i=1; i<size; i++)
    {
        int key=numbers[i];
        int j=i-1;
        while (j>=0 && numbers [j]>key)
        {
            numbers[j+1]=numbers[j];
            j--;
        }
        numbers[j+1]=key;
    }
    printf("\n sorting array by insertion sort algorithm :\n");
    for(int i=0; i<size; i++)
    {
        printf(" %d",numbers[i]);
    }
    printf("\n");
    return 0;
}
