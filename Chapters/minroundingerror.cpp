#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

string minimizeError(vector<string>& prices, int target) {
    int n = prices.size();
    int minSum = 0;
    vector<double> decimals; // store decimal parts

    // Convert prices and prepare data
    for (string& p : prices) {
        double num = stod(p);
        int floored = floor(num);
        minSum += floored;
        double dec = num - floored;
        if (dec > 1e-6) decimals.push_back(dec);
    }

    // maxSum if all decimal numbers are ceiled
    int maxSum = minSum + decimals.size();
    if (target < minSum || target > maxSum) return "-1";

    int toCeil = target - minSum;
    sort(decimals.begin(), decimals.end());

    double error = 0.0;
    int sz = decimals.size();

    // smallest decimal errors are left rounded down,
    // largest ones are rounded up (so minimize error!)
    for (int i = 0; i < sz; ++i) {
        if (i < sz - toCeil) {
            error += decimals[i];
        } else {
            error += 1 - decimals[i];
        }
    }

    // format to 3 decimal places
    char buf[16];
    sprintf(buf, "%.3f", error);
    return string(buf);
}

int main() {
    vector<string> prices = {"0.700","2.800","4.900"};
    int target = 8;
    cout << minimizeError(prices, target) << endl; // Output: 1.000
    return 0;
}
