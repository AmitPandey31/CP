#include <bits/stdc++.h>
using namespace std;
void solve(){
int n,x;
cin>>n>>x;
int sum = pow(2,x);
for(int i = 0; i < n; i++){
    sum /= 2;
}
cout<<sum<<endl;
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
