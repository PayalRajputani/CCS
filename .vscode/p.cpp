#include <iostream>


int main() {
    int nums[] = {2, 7, 11, 15};
    int size = sizeof(nums) / sizeof(nums[0]);

    // Print the indices of array elements
    for (int i = 0; i < size; ++i) {
        std::cout << "Index of element " << nums[i] << ": " << i << std::endl;
    }

    return 0;
}