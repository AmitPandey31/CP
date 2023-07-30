#include <bits/stdc++.h>
using namespace std;

void solve(){
int n;
cin>>n;
vector<int> arr(n);
int even = 0, odd = 0;
for(int i = 0; i < n; i++){
    cin>>arr[i];
    if(arr[i] % 2 == 0){
        even++;
    } else {
        odd++;
    }
}

if(odd == 0 || odd == n){
    cout<<0<<endl;
} else {
    cout<<even<<endl;
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

