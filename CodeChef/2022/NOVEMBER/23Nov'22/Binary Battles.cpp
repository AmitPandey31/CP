#include <iostream>
using namespace std;

void solve(){
int n,a,b;
cin>>n>>a>>b;
int ans = 0;
while(n != 0){
    if(n != 2){
    ans  = ans + a + b;
    } else {
    ans = ans - b;
    }
    n /= 2;
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
