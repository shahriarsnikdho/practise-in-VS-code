#include <stdio.h>

// ITERATIVE: Find First Occurrence
int iterativeFindFirst(int numbers[], int size, int target) {
    int left = 0, right = size - 1;
    int result = -1;

    while (left <= right) {
        int middle = (left + right) / 2;

        if (numbers[middle] == target) {
            result = middle;
            right = middle - 1;
        } else if (numbers[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return result;
}

// ITERATIVE: Find Last Occurrence
int iterativeFindLast(int numbers[], int size, int target) {
    int left = 0, right = size - 1;
    int result = -1;

    while (left <= right) {
        int middle = (left + right) / 2;

        if (numbers[middle] == target) {
            result = middle;
            left = middle + 1;
        } else if (numbers[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return result;
}

//  RECURSIVE: Find First Occurrence
int recursiveFindFirst(int numbers[], int left, int right, int target) {

    if (left > right) {
        return -1;
    }

    int middle = (left + right) / 2;

    if (numbers[middle] == target) {

        int leftResult = recursiveFindFirst(numbers, left, middle - 1, target);
        if (leftResult != -1) {
            return leftResult;
        }
        return middle;
    } else if (numbers[middle] < target) {
        return recursiveFindFirst(numbers, middle + 1, right, target);
    } else {
        return recursiveFindFirst(numbers, left, middle - 1, target);
    }
}

//  RECURSIVE: Find Last Occurrence
int recursiveFindLast(int numbers[], int left, int right, int target) {
    if (left > right) {
        return -1;
    }

    int middle = (left + right) / 2;

    if (numbers[middle] == target) {

        int rightResult = recursiveFindLast(numbers, middle + 1, right, target);
        if (rightResult != -1) {
            return rightResult;
        }
        return middle;
    } else if (numbers[middle] < target) {
        return recursiveFindLast(numbers, middle + 1, right, target);
    } else {
        return recursiveFindLast(numbers, left, middle - 1, target);
    }
}

int main() {
    int size;
    printf("Array Size: ");
    scanf("%d", &size);

    int numbers[size];
    printf("Elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    int target;
    printf("Target: ");
    scanf("%d", &target);

    //  Iterative Result
    int iFirst = iterativeFindFirst(numbers, size, target);
    int iLast  = iterativeFindLast(numbers, size, target);

    printf("\nIterative Binary Search\n");
    if (iFirst == -1) {
        printf("Element not found\n");
    } else {
        printf("First Occurrence: %d\n", iFirst);
        printf("Last Occurrence: %d\n", iLast);
        printf("Total Occurrences: %d\n", iLast - iFirst + 1);
    }

    // Recursive Result
    int rFirst = recursiveFindFirst(numbers, 0, size - 1, target);
    int rLast  = recursiveFindLast(numbers, 0, size - 1, target);

    printf("\n Recursive Binary Search \n");
    if (rFirst == -1) {
        printf("Element not found\n");
    } else {
        printf("First Occurrence: %d\n", rFirst);
        printf("Last Occurrence: %d\n", rLast);
        printf("Total Occurrences: %d\n", rLast - rFirst + 1);
    }

    return 0;
}
