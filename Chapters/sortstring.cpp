#include <iostream>
#include <vector>
#include <string>
using namespace std;

string sort(string s) {
    vector<int> alpha(26, 0);
    for (int i = 0; i < s.size(); i++) {
        alpha[s[i] - 'a']++;
    }
    string ans;
    for (int i = 0; i < 26; i++) {
        char c = 'a' + i;
        while (alpha[i]) {
            ans += c;
            alpha[i]--;
        }
    }
    return ans;
}
    int main() {
    string input;
    cout << "Enter the string (lowercase only): ";
    getline(cin, input);

    string sorted_str = sort(input);
    cout << "Sorted string: " << sorted_str << endl;
    return 0;
}
