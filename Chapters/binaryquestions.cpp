#include <iostream>
using namespace std;

int findLowerBound(int nums[], int n, int target) {
    int start = 0;
    int end = n - 1;
    int index = n;
    int mid;
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (nums[mid] == target) {
            index = mid;
            end = mid - 1;
        } else if (nums[mid] < target) {
            start = mid + 1;
        } else {
            index = mid;
            end = mid - 1;
        }
    }
    return index;
}

int main() {
    int nums[] = {1, 3, 3, 5, 7};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 4;
    cout << findLowerBound(nums, n, target);
}


