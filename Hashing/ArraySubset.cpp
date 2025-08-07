#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

bool isSubset(vector<int> &a, vector<int> &b){
    unordered_map<int,int> freqA;

    for(int num :a){
        freqA[num]++;
    }

    for(int num:b){
        if(freqA[num]==0){
            return false;
        }
        freqA[num]--;
    }
    return true;
}

int main() {
    int n, m;
    cout << "Enter size of array A: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter elements of array A: ";
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << "Enter size of array B: ";
    cin >> m;
    vector<int> b(m);
    cout << "Enter elements of array B: ";
    for(int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    if(isSubset(a, b)) {
        cout << "Array B is a subset of Array A." << endl;
    } else {
        cout << "Array B is NOT a subset of Array A." << endl;
    }

    return 0;
}