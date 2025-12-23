#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    int low = 0, high = numsSize - 1, mid;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    // If not found, low is the insert position
    return low;
}

int main() {
    int nums[] = {1, 3, 5, 6};
    int target = 5;
    int n = sizeof(nums) / sizeof(nums[0]);

    printf("Insert Position: %d\n", searchInsert(nums, n, target));
    return 0;
}
