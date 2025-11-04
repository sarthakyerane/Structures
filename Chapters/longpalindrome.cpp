#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> lower(26, 0);
        vector<int> upper(26, 0);

        for (int i = 0; i < s.size(); i++) {
            if (s[i] >='a') {
                lower[s[i] -'a']++;
            } else {
                upper[s[i]-'A']++;
            }
        }
        int count = 0;
        int odd = 0;
        for (int i = 0; i < 26; i++) {
            // lower case counts
            if (lower[i] % 2 == 0) {
                count += lower[i];
            } else {
                count += lower[i] - 1;
                odd = 1;
            }

            // upper case counts
            if (upper[i] % 2 == 0) {
                count += upper[i];
            } else {
                count += upper[i] - 1;
                odd = 1;
            }
            }
       return count + odd;
    }
};
int main() {
    Solution sol;
    string input;
    cout << "Enter the string: ";
    getline(cin, input);

    int result = sol.longestPalindrome(input);
    cout << "Longest palindrome length: " << result << endl;

    return 0;
}
