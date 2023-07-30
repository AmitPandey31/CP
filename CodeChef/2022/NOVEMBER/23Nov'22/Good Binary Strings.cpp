#include <iostream>
using namespace std;

void solve(){
string str;
cin>>str;
int ans = str.size() - 2;
int ans2 = 2;
if(str[0] == str[ans+1]){
    cout<<ans<<endl;
}else{
    cout<<ans2<<endl;
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
