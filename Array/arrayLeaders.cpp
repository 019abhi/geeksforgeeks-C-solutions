#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> leaders(vector<int> &arr) {
    vector<int> result;
    int n = arr.size();
    int max_from_right = arr[n - 1];
    result.push_back(max_from_right);

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > max_from_right) {
            max_from_right = arr[i];
            result.push_back(max_from_right);
        }
    }

    // Reverse the result to maintain the order of leaders
    reverse(result.begin(), result.end());
    return result;
}