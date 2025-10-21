#include <iostream>
#include <vector>
using namespace std;

// Function to remove duplicates from sorted array
int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;
    int i = 0;  // points to last unique element
    for (int j = 1; j < nums.size(); ++j) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j]; // Overwrite next unique position
        }
    }
    return i + 1; // Number of unique elements
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter array elements in sorted order: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int k = removeDuplicates(nums);
    cout << "Unique count: " << k << endl;
    cout << "Unique elements: ";
    for (int i = 0; i < k; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
