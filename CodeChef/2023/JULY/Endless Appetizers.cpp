#include <bits/stdc++.h>

using namespace std;

void solve(){
    double x;
    cin>>x;
    double y;
    cin>>y;
    double r;
    cin>>r;
    
    r /= 30;
    x += r;
    double ans = 0;
    ans = ceil(x/y);
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
