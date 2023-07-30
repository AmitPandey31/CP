#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int oneCount,zeroCount =0;
 
    for(auto x : s){
        if(x == '0'){
            zeroCount++;
        } 
    }
    for(auto x : s){
        if(x == '1'){
            oneCount++;
        } 
    }
    if(n%2 == 0){
        if(oneCount%2 and zeroCount%2){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
        
    }else{
        cout<<"YES"<<endl;
    }
}

int main() {
	// your code goes here
	int t; 
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}



