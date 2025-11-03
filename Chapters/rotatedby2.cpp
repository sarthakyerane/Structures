#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    void rotateclock(string &s) {
        char c = s[s.size() - 1];
        int index = s.size() - 2;
        while (index >= 0) {
            s[index + 1] = s[index];
            index--;
        }
        s[0] = c;
    }

    void rotateanticlock(string &s) {
        char c = s[0];
        int index = 1;
        while (index < s.size()) {
            s[index - 1] = s[index];
            index++;
        }
        s[s.size() - 1] = c;
    }

    bool isRotated(string &s1, string &s2) {
        if (s1.size() != s2.size())
            return false;
        string clock = s1;
        rotateclock(clock);
        rotateclock(clock);
        if (clock == s2)
            return true;
        string anticlock = s1;
        rotateanticlock(anticlock);
        rotateanticlock(anticlock);
        if (anticlock == s2)
            return true;
        return false;
    }
};

int main() {
    
    string s1, s2;
    cout << "Enter string 1: ";
    cin >> s1;
    cout << "Enter string 2: ";
    cin >> s2;
    Solution sol;
    if (sol.isRotated(s1, s2))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
