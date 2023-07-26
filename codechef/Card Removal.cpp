// https://www.codechef.com/problems/REMOVECARDS

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; ++i){
            cin>>arr[i];
        }
        int count = 0;
        for(int i = 0; i < n-1; ++i){
            int maxCount = 0; // Initialize maxCount outside the loop
            for(int j = i + 1; j < n; ++j){
                if(arr[i] == arr[j]){
                    maxCount++;
                }
            }
            if(maxCount > count){
                count = maxCount;
            }
        }
        cout << n - count-1 << endl;
    }
    return 0;
}
