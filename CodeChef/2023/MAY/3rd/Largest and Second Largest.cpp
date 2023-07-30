#include <iostream>
#include <algorithm>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    sort(arr, arr + n);
    int last_idx = n - 1;
    while(arr[last_idx] == arr[n-1]){
        last_idx--;
    }
    cout<<arr[n-1] + arr[last_idx--]<<endl;
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
