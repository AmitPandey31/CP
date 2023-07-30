#include <bits/stdc++.h>
using namespace std;

void solve(){
int a,b;
cin>>a>>b;
if(a % b == 0){
    cout<<"YES"<<endl;
}else if (b / a == 1){
    cout<<"NO"<<endl;
}else {
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
