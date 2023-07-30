#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string str1,str2;
    cin>>str1>>str2;
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1 == str2){
        cout<<"YES"<<endl;
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
	}	return 0;
}
