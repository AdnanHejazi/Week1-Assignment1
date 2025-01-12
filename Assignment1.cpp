#include <iostream>

void twoSum(int nums[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (nums[i] + nums[j] == target) {
                std::cout << "Output: [" << i << ", " << j << "]\n";
                return;
            }
        }
    }
}

int main() {
    // Example usage
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    twoSum(nums1, 4, target1);

    int nums2[] = {3, 2, 4};
    int target2 = 6;
    twoSum(nums2, 3, target2);

    int nums3[] = {3, 3};
    int target3 = 6;
    twoSum(nums3, 2, target3);

    return 0;
}
