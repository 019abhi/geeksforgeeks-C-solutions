#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int n = arr.size();
    int start = 0;
    long long current_sum = 0;

    for (int end = 0; end < n; end++) {
        current_sum += arr[end];

      
        while (current_sum > target && start <= end) {
            current_sum -= arr[start];
            start++;
        }

        if (current_sum == target) {
            return {start + 1, end + 1}; 
        }
    }
    return {-1};
    }
};

int main(){
     int n, target;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter target: ";
    cin >> target;

    Solution sol;
    vector<int> result = sol.subarraySum(arr, target);

    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}