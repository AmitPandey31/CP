#include <bits/stdc++.h>
using namespace std;
void solve(){
    float a,c;
    cin>>a>>c;
    float ans = (a+c)/2;
    if(ceil(ans) == floor(ans)){
        cout<<ans<<endl;
    } else {
        cout<<-1<<endl;
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
