#include <iostream>
using namespace std;
#include <vector>
 vector<int> findMajorityElement(vector<int>& nums) {
    int n = nums.size();
    int count1 = 0; 
    int count2 = 0;
    int nums1 = 0;
    int nums2 = 0;
    for(int num =0; num <n; num++){
        if(num == nums1){
            count1++;
        } else if( num ==  nums2){
            count2++;
        }else if(count1==0){
            nums1 = num;
            count1 = 1;
        }else if(count2==0){
            nums2 = num;
            count2 = 1;
        } else{
            count1--;
            count2--;
        }
        
    }
    count1 = 0;
    count2 = 0;
    for(int num = 0; num < n; num++){
        if(num == nums1){
            count1++;
        } else if(num == nums2){
            count2++;
        }
    }

    vector<int> result;
    if(count1 > n/3) result.push_back(nums1);
    if(count2 > n/3) result.push_back(nums2);
    return result;
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    vector<int> result = findMajorityElement(nums);
    if(result.empty()){
        cout << "No majority element found." << endl;
    } else {
        cout << "Majority elements are: ";
        for(int num : result){
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}