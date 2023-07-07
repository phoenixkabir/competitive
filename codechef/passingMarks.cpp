// https://www.codechef.com/problems/PSGRADE  
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,t,A,B,C;
	    cin>>a>>b>>c>>t>>A>>B>>C;
	    if(A>=a && B>=b && C>=c && A+B+C>=t){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
