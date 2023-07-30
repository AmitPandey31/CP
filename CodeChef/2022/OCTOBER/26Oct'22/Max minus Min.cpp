#include <bits/stdc++.h>
using namespace std;

void solve(){
int a,b,c;
cin>>a>>b>>c;
// int l = std::max({a, b, c});
// int s = std::min({a, b, c});
int ans = std::max({a, b, c}) - std::min({a, b, c});
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
