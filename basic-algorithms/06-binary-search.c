#include <stdio.h>

// Binary Search function
int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;  // found
        } else if (nums[mid] < target) {
            left = mid + 1;  // search right half
        } else {
            right = mid - 1; // search left half
        }
    }
    return -1;  // not found
}

int main() {
    int nums[] = {-1, 0, 3, 5, 9, 12};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 9;

    int result = search(nums, numsSize, target);

    if (result != -1) {
        printf("Element %d found at index: %d\n", target, result);
    } else {
        printf("Element %d not found\n", target);
    }

    return 0;
}
