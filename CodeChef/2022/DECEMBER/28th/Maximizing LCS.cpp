#include <bits/stdc++.h>
using namespace std;

void solve(){
 int n;
 cin>>n;
 string str;
 cin>>str;
 vector<vector<int>> ar(n+1, vector<int>(n+1, 0));
 string rstr = str;
 reverse(rstr.begin(),rstr.end());
 for(int i = 1; i <= n; i++){
     for(int j = 1; j <= n; j++){
         if(str[j-1] != rstr[i-1]){
             ar[i][j] = max(ar[i][j-1], ar[i-1][j]);
         } else {
             ar[i][j] = 1 + ar[i-1][j-1];
         }
     }
 }
 cout<<ar[n][n]/2<<endl;
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
