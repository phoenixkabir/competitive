// https://www.codechef.com/problems/AIRLINE

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        if(a+b<=d && c<=e || a+c<=d && b<=e || b+c<=d && a<=e){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
} 
