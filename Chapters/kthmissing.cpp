#include <iostream>
#include <vector>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
    int n = arr.size();
    int current = 1, idx = 0;
    while (k > 0) {
        if (idx < n && arr[idx] == current)
            idx++;
        else
            k--;
        if (k == 0)
            return current;
        current++;
    }
    return -1;
}

int main() {
    int n, k;
    cout << "Enter array size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    cout << "Enter k: ";
    cin >> k;
    int res = findKthPositive(arr, k);
    cout << "Kth missing positive integer: " << res << endl;
    return 0;
}
