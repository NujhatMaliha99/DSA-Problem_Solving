#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int> arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    int ans = -1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target) {
            ans = mid;
            right = mid - 1;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return ans;
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

    int ans = firstOccurrence(arr, target);

    if (ans != -1) {
        cout << "First occurrence found at index: " << ans << endl;
    }
    else {
        cout << "Target not found" << endl;
    }

    return 0;
}