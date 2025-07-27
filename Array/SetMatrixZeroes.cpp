#include<iostream>
using namespace std;
#include<vector>


class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        
        int n= mat.size();
        int m = mat[0].size();
        vector<bool> row(n, false);
    vector<bool> col(m, false);
    
    for(int i =0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i][j]==0){
                row[i] =true;
               col[j]= true;
            }
        }
    }
    
      for(int i =0; i<n; i++){
        for(int j=0; j<m; j++){
            if(row[i] || col[j]){
              mat[i][j]=0;
            }
        }
    }
    
    }
};

int main() {
   int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }
    Solution obj;
    obj.setMatrixZeroes(mat);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}