#include <bits/stdc++.h>
using namespace std;

void solve(){
 int n;
 cin>>n;
 vector<int> ar1(n);
 vector<int> ar2(n);
 for(int i = 0; i < n; i++){
     cin>>ar1[i];
 }
 for(int j = 0; j < n; j++){
     cin>>ar2[j];
 } int count = 0, ans=0;
 for(int k = 0; k < n; k++){
     if(ar1[k] and ar2[k] != 0){
         count++;
     } else {
         count = 0;
     }
     ans = max(ans, count);
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
