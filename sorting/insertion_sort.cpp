#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 1; i < n; i++) {
        int current = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = current;
    }
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

    insertionSort(arr);

    cout << "Sorted array: ";
    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}