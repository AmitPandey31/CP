#include <iostream>
using namespace std;

void solve(){
   int n;
   cin>>n;
   int m;
   cin>>m;
   if(n%2 == 0 and m%2 == 0 or n%2 != 0 and m%2 != 0){
       cout<<"YES"<<endl;
   }
   else {
       cout<<"NO"<<endl;
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
