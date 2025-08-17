#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int minJumps(vector<int>& arr){
  int n = arr.size();
    if(n<=0){
        return 0;
    }

    if(arr[0]==0){
        return -1;
    }

    int maxReach = arr[0];
    int steps =arr[0];
   int jumps = 1;
   for(int i =0; i<n; i++){
    if(i ==n-1) return jumps;

    maxReach = max(maxReach, i + arr[i]);
    steps--;

    if(steps == 0){
        jumps++;
        steps = maxReach - i;
        if(steps <= 0) return -1;
    }
    
   }
}
int main(){
    vector<int> arr = {2, 3, 1, 1, 4};
    cout << "Minimum jumps required: " << minJumps(arr) << endl;
    return 0;
}