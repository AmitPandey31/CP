#include <iostream>
using namespace std;

void solve(){
int n;
cin>>n;
int arr[n];
int even = 0;
for(int i = 0; i < n; i++){
    cin>>arr[i];
    if(arr[i] % 2){
        even++;
    }
}
if(even == 0 or even % 2){
    cout<<"No"<<endl;
} else {
    cout<<"Yes"<<endl;
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
