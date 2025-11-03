#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        for (int i = 0; i < address.size(); i++) {
            if (address[i] == '.') {
                ans += "[.]";
            } else {
                ans += address[i];
            }
        }
        return ans;
    }
};

int main() {
    string ip;
    cout << "Enter an IP address: ";
    cin >> ip;

    Solution sol;
    string defanged = sol.defangIPaddr(ip);
    cout << "Defanged IP address: " << defanged << endl;

    return 0;
}
