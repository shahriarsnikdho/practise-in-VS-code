#include <stdio.h>
// Iterative
void iterativeMaxMin(int numbers[], int size) {
    int max = numbers[0];
    int min = numbers[0];

    for (int i = 1; i < size; i++) {
        if (numbers[i] > max)
            max = numbers[i];

        if (numbers[i] < min)
            min = numbers[i];
    }

    printf("Maximum Element = %d\n", max);
    printf("Minimum Element = %d\n", min);
}
// Recursive
void recursiveMaxMin(int numbers[], int size, int currentIndex, int max, int min) {
    if (currentIndex >= size) {
        printf("Maximum Element = %d\n", max);
        printf("Minimum Element = %d\n", min);
        return;
    }
    if (numbers[currentIndex] > max)
        max = numbers[currentIndex];

    if (numbers[currentIndex] < min)
        min = numbers[currentIndex];

    recursiveMaxMin(numbers, size, currentIndex + 1, max, min);
}
int main() {
    int size;
    printf("Array Size: ");
    scanf("%d", &size);

    int numbers[size];

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }
    printf("\nIterative:\n");
    iterativeMaxMin(numbers, size);

    printf("\nRecursive:\n");
    recursiveMaxMin(numbers, size, 1, numbers[0], numbers[0]);
    return 0;
}
