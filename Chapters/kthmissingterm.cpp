#include <iostream>
using namespace std;

// Function to find the k-th missing positive number
int findKthMissing(int arr[], int n, int k) {
    int start = 0, end = n - 1, ans = n;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        // Number of missing numbers till index mid
        int missing = arr[mid] - (mid + 1);
        if (missing >= k) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    if (ans == n)
        return arr[n - 1] + (k - (arr[n - 1] - n));
    else
        return ans + k;
}

int main() {
    int n, arr[1000], k;
    cout << "enter the length " << endl;
    cin >> n;
    cout << "enter the n elements" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "enter the k th term to be found " << endl;
    cin >> k;

    int result = findKthMissing(arr, n, k);
    cout << result << endl;

    return 0;
}
