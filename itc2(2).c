#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) {
        return n;
    }

    int j = 0; // To keep track of unique elements index

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    }

    arr[j++] = arr[n - 1]; // Include the last unique element

    return j; // Return the new size of the array
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5}; // Example sorted array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    int newSize = removeDuplicates(arr, n);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
