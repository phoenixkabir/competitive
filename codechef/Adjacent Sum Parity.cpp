//  https://www.codechef.com/problems/ADJSUMPAR

 #include<bits/stdc++.h>
using namespace std;




int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
       for(int i =0; i <n;++i){
           cin>>arr[i];
       }
        int count =1;
        int count1 =1;
        if(arr[0]==1){
        for(int v =1; v<n;++v){
            
            if(arr[v]==0){
                count++;
            }
        }
        if(count==n){
            cout<<"NO"<<endl;
        }
        }
        
        if(arr[0]==0){
        for(int v =1; v<n;++v){
            
            if(arr[v]==1){
                count1++;
            }
        }
        if(count1==n){
            cout<<"NO"<<endl;
        }
        }
        if(count!=n && count1!=n){
            cout<<"YES"<<endl;
        }
    }
}
