#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string toHex(int num) {
        if(num == 0) return "0"; // hum straight return 0 karte hai when num 0
        string hex = "0123456789abcdef";
        string res = "";
        unsigned int n = num;
        while(n) {
            res = hex[n % 16] + res;
            n /= 16;
        }
        return res;
    }
};

int main() {
    Solution sol;
    int num = 26;
    cout << "Hexadecimal: " << sol.toHex(num) << endl; 
    num = -1;
    cout << "Hexadecimal: " << sol.toHex(num) << endl; 
    return 0;
}
