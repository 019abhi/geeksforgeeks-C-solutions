#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> getPairs(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    vector<vector<int>> result;
    int left = 0, right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == 0) {
            result.push_back({arr[left], arr[right]});

            int leftVal = arr[left], rightVal = arr[right];
            // Skip duplicates
            while (left < right && arr[left] == leftVal) left++;
            while (left < right && arr[right] == rightVal) right--;
        }
        else if (sum < 0) {
            left++;
        }
        else {
            right--;
        }
    }

    return result;
}

int main() {
    vector<int> arr = {-3, 1, 2, -1, 1, -2, 3, 0};
    vector<vector<int>> pairs = getPairs(arr);

    for (auto& pair : pairs) {
        cout << "[" << pair[0] << ", " << pair[1] << "]\n";
    }

    return 0;
}

    


