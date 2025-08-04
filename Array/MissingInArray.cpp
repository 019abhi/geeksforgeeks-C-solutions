#include <vector>
#include <iostream>
using namespace std;
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n = arr.size()+1;
        long long sum=0;
        long long total = (1LL * n * (n + 1)) / 2;
        
        for(int i =0; i<n-1; i++){
          sum += arr[i];  
        }
        return total - sum;
    }
};
int main(){
    int n;
    cin >>n;
    vector<int> arr(n-1);
    for(int i=0; i<n-1; i++){
        cin >> arr[i];
    }
    Solution sol;
    cout << sol.missingNum(arr) << endl;

}