#include <iostream>
#include <vector>
#include <algorithm>  // for swap()
using namespace std;

void segregate0and1(vector<int> &arr) {
    int n = arr.size();
    int start = 0, end = n - 1;

    while (start <= end) {
        if (arr[start] == 0) {
            start++;
        }
        else if (arr[end] == 0) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        else {
            end--;
        }
    }
}

int main() {
    vector<int> arr = {0, 1, 0, 1, 1, 0};

    cout << "Original array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    segregate0and1(arr);  // no object needed now

    cout << "After segregation: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}
