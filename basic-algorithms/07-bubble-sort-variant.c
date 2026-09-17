#include <stdio.h>

void bubbleSort(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                // swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void moveZeroesBubble(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size - 1; j++) {
            if(arr[j] == 0) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    bubbleSort(arr1, size1);
    printf("Sorted array: ");
    for(int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    int arr2[] = {0, 1, 0, 3, 12};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    moveZeroesBubble(arr2, size2);
    printf("Array after moving zeroes: ");
    for(int i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
