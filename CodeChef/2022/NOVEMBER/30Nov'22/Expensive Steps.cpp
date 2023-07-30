#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,x1,y1,x2,y2;
    cin>>n>>x1>>y1>>x2>>y2;
    int move1 = min(x1,n-x1+1);
    int move2 = min(y1,n-y1+1);
    int move3 = min(x2,n-x2+1);
    int move4 = min(y2,n-y2+1);
    int ans = min(abs(x2-x1) + abs(y2-y1), min(move3,move4) + min(move1,move2));
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
