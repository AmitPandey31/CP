#include <bits/stdc++.h>
using namespace std;

void solve(){
int n;
cin>>n;
string str;
cin>>str;
int ans = 0;
for(int j = 0; j < n - 1; ++j){
    if(str[j+1] == '0' && str[j] == '1') ans++;
}
cout<<ans<<endl;
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