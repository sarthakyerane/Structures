#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";

        string prefix = strs[0];
        for (int i = 1; i<strs.size();i++) {
            int j=0;
            while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) {
                j++;
            }
            prefix = prefix.substr(0, j);
            if (prefix == "")
                return "";
        }
        return prefix;
    }
};
int main() {
    Solution sol;

    // Example 1
    vector<string> strs1 = {"flower", "flow", "flight"};
    cout << "Common prefix: " << sol.longestCommonPrefix(strs1) << endl; }