#include <iostream>
using namespace std;

void solve(){
int n,m,k,x;
cin>>n>>m>>k>>x;
int sum1 = n*k+m;
int sum2 = n*(k-1);
if(x % sum1 == 0 or x % sum1 - sum2 > 0){
    cout<<"Yes"<<endl;
} else {
    cout<<"No"<<endl;
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
