#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    int balanceSums(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        vector<int> rowSum(n,0),colSum(n,0);
        
        for(int i=0; i<n; i++){
             for(int j=0; j<n; j++){
                 rowSum[i]+=mat[i][j];
                 colSum[j]+=mat[i][j];
                 
             }
        }
             
             int target =0;
              for(int i=0; i<n; i++){
                  if (rowSum[i] > target) target = rowSum[i];
            if (colSum[i] > target) target = colSum[i];
              }
              
              int operations =0;
              for(int i =0; i<n; i++){
                  operations+=  (target - rowSum[i]);
              }
            
                 
            return operations;
        
    }
};

int main() {
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
    Solution sol;
    cout << sol.balanceSums(mat) << endl;
    return 0;
}