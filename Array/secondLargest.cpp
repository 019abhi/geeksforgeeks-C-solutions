#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
      int largest = -1, second = -1;

    for (int num : arr) {
        if (num > largest) {
            second = largest;
            largest = num;
        } else if (num < largest && num > second) {
            second = num;
        }
    }

    return second;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Solution sol;
    cout << sol.getSecondLargest(arr) << endl;
    return 0;
}           