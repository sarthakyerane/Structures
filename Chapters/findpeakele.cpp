#include <iostream>
#include <vector>
using namespace std;


int findPeakElement(vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

       
        if (nums[mid] < nums[mid + 1])
            left = mid + 1;
        else
            right = mid;
    }

   
    return left;
}

int main() {
    vector<int> nums = {1, 2, 1, 3, 5, 6, 4};

    int peakIndex = findPeakElement(nums);

    cout << "Peak element index: " << peakIndex << endl;
    cout << "Peak element value: " << nums[peakIndex] << endl;

    return 0;
}
