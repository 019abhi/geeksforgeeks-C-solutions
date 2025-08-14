#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n) {
    vector<int> pos, neg;

    // Separate positives and negatives
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }

    int i = 0, p = 0, ng = 0;

    // Alternate placement: start with positive
    while (p < pos.size() && ng < neg.size()) {
        arr[i++] = pos[p++];
        arr[i++] = neg[ng++];
    }

    // Add remaining positives
    while (p < pos.size())
        arr[i++] = pos[p++];

    // Add remaining negatives
    while (ng < neg.size())
        arr[i++] = neg[ng++];
}

int main() {
    int arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
