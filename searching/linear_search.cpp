#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target value: ";
    cin >> target;

    int ans = linearSearch(arr, target);

    if (ans != -1) {
        cout << "Target found at index: " << ans << endl;
    }
    else {
        cout << "Target not found" << endl;
    }

    return 0;
}