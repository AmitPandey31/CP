#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  string str;
  cin>>str;
  vector<int> ones;
  for(int i = 0; i < n; i++){
      if(str[i] == '1') {
          ones.push_back(i);
      }
  }
  bool ans = false;
  int end = ones[ones.size()-1];
  for(int i = 0; i < ones.size(); i++){
      if((end - ones[i]) % 2 == 1){
          ans = true;
          break;
      }
  }
  
  if (ans){
      cout<<1<<endl;
  } else {
      cout<<2<<endl;
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
