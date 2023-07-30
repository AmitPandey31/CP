#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ar[n];
    int arr[n];
    int sol = 0;
    for(int i = 0; i < n; i++){
        cin>>ar[i];
    } 
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++){
        if(ar[i] > arr[i]){
            if(ar[i] <= 2*arr[i]){
                sol++;
            }
        }
        else if ( ar[i] < arr[i]){
            if(2*ar[i] >= arr[i]){
                sol++;
            }
        }
        else {
            sol++;
        }
    }
    cout<<sol<<endl;
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
