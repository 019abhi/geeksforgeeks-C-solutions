#include<iostream>
using namespace std;
#include<vector>



class Solution {
  public:
    int subarraySum(vector<int>& arr) {
        // code here
        int n = arr.size();
        long long total =0;
        
        for(int i =0; i<n; i++){
             total += (long long)arr[i] * (i + 1) * (n - i);
        }
        return total;
    }
};

int main() {
    int n;