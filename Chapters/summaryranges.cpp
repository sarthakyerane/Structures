#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        int n = nums.size();
        if (n == 0) return res;
        int start = 0;
        for (int i = 1; i <= n; ++i) {
            if (i == n || nums[i] != nums[i-1] + 1) {
                if (start == i-1) {
                    res.push_back(to_string(nums[start]));
                } else {
                    res.push_back(to_string(nums[start]) + "->" + to_string(nums[i-1]));
                }
                start = i;
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0, 1, 2, 4, 5, 7};  // Example input
    vector<string> ranges = sol.summaryRanges(nums);

    cout << "Summary Ranges: [";
    for (int i = 0; i < ranges.size(); ++i) {
        cout << "\"" << ranges[i] << "\"";
        if (i != ranges.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
    return 0;
}
