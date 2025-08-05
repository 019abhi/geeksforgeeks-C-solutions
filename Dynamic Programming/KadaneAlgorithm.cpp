#include<iostream>
#include<vector>
using namespace std;

int maxSubarraySum(vector<int> &arr) {
    int n= arr.size();
    int maxSum = arr[0];
    int currSum =arr[0];
    for(int i=1; i<n ; i++){
        currSum=max(arr[i],currSum+arr[i]);
        maxSum=max(maxSum,currSum);
    }
    return maxSum;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int result = maxSubarraySum(arr);
    cout << result << endl;
    return 0;
}