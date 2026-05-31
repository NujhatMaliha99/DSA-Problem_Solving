#include <bits/stdc++.h>
using namespace std;

void mergeArray(vector<int>& arr, int left, int mid, int right) {
    vector<int> temp;

    int i = left;
    int j = mid + 1;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        }
        else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= right) {
        temp.push_back(arr[j]);
        j++;
    }

    for (int k = 0; k < temp.size(); k++) {
        arr[left + k] = temp[k];
    }
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left >= right) {
        return;
    }

    int mid = (left + right) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    mergeArray(arr, left, mid, right);
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

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}