#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    
    int count = 0; int zero = 0;
    for(auto x : a){
        if(x < 0) {count++;}
        if(x == 0) {zero =1;}
    }
    if(count % 2 == 0 || zero == 1) cout<<"0"<<endl;
    else{
         cout<<"1"<<endl;
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