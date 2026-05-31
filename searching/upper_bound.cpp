#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int> arr, int target) {
    int left = 0;
    int right = arr.size();

    while (left < right) {
        int mid = (left + right) / 2;

        if (arr[mid] <= target) {
            left = mid + 1;
        }
        else {
            right = mid;
        }
    }

    return left;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target value: ";
    cin >> target;

    int ans = upperBound(arr, target);

    if (ans < n) {
        cout << "Upper bound index: " << ans << endl;
        cout << "Upper bound value: " << arr[ans] << endl;
    }
    else {
        cout << "No upper bound found" << endl;
    }

    return 0;
}