#include <iostream>

#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n= nums.size();

        int maxVal=*max_element(nums.begin(), nums.end());
        int maxLen=0, currentLen =0;

        for(int i=0; i<n; i++){
            if(nums[i] == maxVal){
                currentLen++;
                maxLen = max(maxLen , currentLen);
            } else {
                currentLen = 0;
        }
        }
        return maxLen;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    Solution sol;
    cout << sol.longestSubarray(nums) << endl;
    return 0;
}