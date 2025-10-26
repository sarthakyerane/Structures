#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != val) {
                nums[k++] = nums[i];
            }
        }
        return k;
    }
};

int main() {
    vector<int> nums1 = {3, 2, 2, 3};
    vector<int> nums2 = {0, 1, 2, 2, 3, 0, 4, 2};
    int val1 = 3;
    int val2 = 2;

    // Usage 1: Named object easy one(use this one bro)
    Solution sol;
    int k1 = sol.removeElement(nums1, val1);
    cout << "Usage 1: New length: " << k1 << "\n Modified array: ";
    for (int i = 0; i < k1; ++i) cout << nums1[i] << " ";
    cout << endl;

    // Usage 2: Temporary object 
    int k2 = Solution().removeElement(nums2, val2);
    cout << "Usage 2: New length: " << k2 << "\n Modified array: ";
    for (int i = 0; i < k2; ++i) cout << nums2[i] << " ";
    cout << endl;

    // Usage 3: Pointer 2nd best for me
    vector<int> nums3 = {1, 1, 1, 2, 2, 3};
    int val3 = 1;
    Solution* solPtr = new Solution();
    int k3 = solPtr->removeElement(nums3, val3);
    cout << "Usage 3: New length: " << k3 << "\nModified array: ";
    for (int i = 0; i < k3; ++i) cout << nums3[i] << " ";
    cout << endl;
    delete solPtr;

    return 0;
}
