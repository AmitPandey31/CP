#include <iostream>
using namespace std;

void solve(){
int n;
cin>>n;
for(int i=n/2; i >=1 ; i--){
    cout<<i<<" ";
}
for(int i=n/2 + 1; i <= n; i++){
    cout<<i<<" ";
}
cout<<endl;
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
