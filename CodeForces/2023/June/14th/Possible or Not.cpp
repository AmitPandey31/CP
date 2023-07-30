#include <iostream>
using namespace std;

void solve(){
int n,b;
cin>>n>>b;
int curr = -1;
int i = 0;
while(i < n){
    int x;
    cin>>x;
    if((x&b)==b)
    curr &= x;
    i++;
}
if(curr == b) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
    
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
