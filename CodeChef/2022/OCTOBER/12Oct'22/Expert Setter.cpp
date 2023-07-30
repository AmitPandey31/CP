#include <bits/stdc++.h>
using namespace std;

void solve(){
    double x,y;
    cin>>x>>y;
    double per = 100*y/x;
    if(per >= 50){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
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

