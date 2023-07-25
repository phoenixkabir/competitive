// https://www.codechef.com/problems/CNDY

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[2*n];
        for(int i =0;i<2*n ; ++i){
            cin>>arr[i];
        }
        bool valid = true;
        for(int i =0; i < 2*n-1 ; ++i){
            int count = 1;
            for(int j = i+1;j<2*n ; ++j){
                if(arr[i]==arr[j]){
                    count++;
                }
                if(count>=3){
                    valid = false;
                    break;
                }
            }
            if(count>2){
                    break;
                }
        }
        if(valid==true){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
