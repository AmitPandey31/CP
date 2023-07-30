#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  int arr[n];
  int min = INT_MAX;
  for(int i = 0; i < n; i++){
      cin>>arr[i];
      if(arr[i] < min){
          min = arr[i];
      }
  } int count = 0;
  for(int i = 0; i < n; i++){
      if(arr[i] != min){
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
