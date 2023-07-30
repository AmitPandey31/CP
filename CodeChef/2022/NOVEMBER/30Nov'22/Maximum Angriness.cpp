#include <iostream>
using namespace std;
void solve(){
int n,k;
cin>>n>>k;
long long int ans = (n*(n-1))/2;
 if(k<n/2){
    long long int d = n-2*k;
    ans -= (d*(d-1))/2;
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
