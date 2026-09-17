#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int index = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[index++] = nums[i];
        }
    }

    while (index < numsSize) {
        nums[index++] = 0;
    }
}

int main() {
    int nums[] = {0, 1, 0, 3, 12};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    printf("Original array: ");
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    moveZeroes(nums, numsSize);

    printf("Array after moving zeroes: ");
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
