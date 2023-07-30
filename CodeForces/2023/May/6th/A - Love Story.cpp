#include <bits/stdc++.h>
using namespace std;
 
void solve(){
 string c = "codeforces";
 string s;
 cin>>s;
 int count = 0;
 for(int i = 0; i < 10; i++){
     if(s[i] == c[i]){
         continue;
     } else {
         count++;
     }
 }
 cout<<count<<endl;
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