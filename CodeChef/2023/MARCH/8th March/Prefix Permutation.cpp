#include <bits/stdc++.h>
using namespace std;

void solve(){
 int n;
 cin>>n;
 if(n % 2 != 0){
     cout<<-1<<endl;
 } else {
     for(int i = 1; i <= n; i=i+2){
         cout<<i+1<<" "<<i<<" ";
     }
     cout<<endl;
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
