#include <iostream>
using namespace std;

void solve(){
int n;
cin>>n;
string str;
cin>>str;
int ans = 0;
for(int i = 1; i < n; ++i){
    if((str[i]) == (str[i-1])) {
        ans++;
    }
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
