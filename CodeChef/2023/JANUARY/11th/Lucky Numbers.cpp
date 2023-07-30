#include <bits/stdc++.h>
using namespace std;

void solve(){
    int number;
    cin>>number;
    int flag = 0;
    while(number != 0) {
      if(number % 10 == 7){
          flag = 1;
          break;
      }
      number = number / 10;
   }
   if(flag){
       cout<<"YES"<<endl;
    } else {
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
