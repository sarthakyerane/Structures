#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Solution{
public:
    int scoreOfString(string s){
        int score=0;
        for(int i=1;i<s.size();i++){
            score+=abs(s[i]-s[i-1]);
        }
        return score;
    }
};
int main() {
    Solution sol;
    string s = "hello"; // Example input (you can change this)
    cout << sol.scoreOfString(s) << endl; // Output: 13
    return 0;
}
