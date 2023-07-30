#include <iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int arr[n];
    int ans = 0;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        if(arr[i] >= x){
            ans++;
        }
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
