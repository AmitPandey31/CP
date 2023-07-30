#include <iostream>
using namespace std;

void solve(){
   string n;
   cin>>n;
   int size = n.size();
   int res = 0;
   for(int i = 0; i < size; i++){
       res = (res * 10 + (n[i] - '0'))%20;
   }
   cout<<res<<endl;
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
