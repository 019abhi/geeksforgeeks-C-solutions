#include<iostream>
using namespace std;


int countNumbers(int n) {
        // Code Here
        int result = 0;
         for (int i = 0; i*i <= n; i++){
             int count = 0;
             int sq = i*i;
             
             for (int i =1; i*i<sq ; i++){
                 if(sq % i)continue;
                 count++;
                 if(sq/i != i) count++;
                 if(count > 9)
                 break;
                 
             }
             if(count==9)
             result++;
         }
         return result;
    };

    int main(){
        int n;
        cin >>n;
        cout << countNumbers(n) << endl;
        return 0;
    }
