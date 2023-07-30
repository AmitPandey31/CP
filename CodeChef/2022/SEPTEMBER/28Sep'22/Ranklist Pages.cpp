#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x,pageNo;
    cin>>x;
    pageNo=(x/25);
    if(x%25==0){
        cout<<pageNo<<endl;
    } else {
        cout<<pageNo+1<<endl;
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