#include <stdio.h>

// Function to move zeros to the end of the array
void moveZerosToEnd(int arr[], int n) {
    int count = 0; // Count of non-zero elements

    // Traverse the array. If an element is non-zero, place it at the 'count' index
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }

    // Fill the remaining positions with zeros
    while (count < n) {
        arr[count++] = 0;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The Previous Array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }

    moveZerosToEnd(arr, n);

    printf("Array after moving zeros to the end: ");
    printArray(arr, n);

    return 0;
}
