#include <bits/stdc++.h>
using namespace std;

void segregateElements(int arr[], int n) {
    vector<int> temp;
    temp.reserve(n); // avoid reallocations

    // First store positives
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            temp.push_back(arr[i]);
        }
    }

    // Then store negatives
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            temp.push_back(arr[i]);
        }
    }

    // Copy back to arr
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, -1, 3, 2, -7, -5, 11, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    segregateElements(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
