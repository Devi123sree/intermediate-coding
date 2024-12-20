#include <stdio.h>

int removeElement(int arr[], int n, int key) {
    int count = 0; // To count elements not equal to key

    for (int i = 0; i < n; i++) {
        if (arr[i] != key) {
            count++;
        }
    }

    return count;
}

int main() {
    int arr[] = {3, 2, 2, 3, 4, 5, 3}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate array size
    int key = 3; // Key to remove

    int result = removeElement(arr, n, key);

    printf("Number of elements not equal to %d: %d\n", key, result);

    return 0;
}
