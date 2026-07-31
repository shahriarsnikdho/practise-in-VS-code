#include <stdio.h>

// Iterative Function
void iterativeFindAll(int numbers[], int size, int key) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (numbers[i] == key) {
            printf("Found at Index: %d\n", i);
            count++;
        }
    }

    printf("Total Occurrences: %d\n", count);
}

// Recursive Function
int recursiveFindAll(int numbers[], int size, int key, int currentIndex, int count) {
    if (currentIndex >= size) {
        printf("Total Occurrences: %d\n", count);
        return count;
    }

    if (numbers[currentIndex] == key) {
        printf("Found at Index: %d\n", currentIndex);
        count++;
    }

    return recursiveFindAll(numbers, size, key, currentIndex + 1, count);
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

    int key;
    printf("Key: ");
    scanf("%d", &key);

    printf("\nIterative Search:\n");
    iterativeFindAll(numbers, size, key);

    printf("\nRecursive Search:\n");
    recursiveFindAll(numbers, size, key, 0, 0);

    return 0;
}
