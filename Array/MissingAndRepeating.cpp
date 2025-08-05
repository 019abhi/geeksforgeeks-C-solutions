#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        long long sum_n = (long long)n * (n + 1) / 2;
        long long sum_sq_n = (long long)n * (n + 1) * (2 * n + 1) / 6;

        long long sum_arr = 0, sum_sq_arr = 0;
        for (int i = 0; i < n; i++) {
            sum_arr += arr[i];
            sum_sq_arr += (long long)arr[i] * arr[i];
        }

        long long diff = sum_arr - sum_n; // x - y
        long long sq_diff = sum_sq_arr - sum_sq_n; // x^2 - y^2

        long long sum = sq_diff / diff; // x + y

        int x = (diff + sum) / 2;
        int y = x - diff;

        return {x, y};
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    Solution sol;
    vector<int> res = sol.findTwoElement(arr);

    cout << "Repeating element: " << res[0] << endl;
    cout << "Missing element: " << res[1] <<endl;
}