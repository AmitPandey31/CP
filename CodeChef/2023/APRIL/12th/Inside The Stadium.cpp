#include <iostream>
using namespace std;

void solve(){
int n;
cin>>n;
int arr[n];
for(int i = 0; i < n; i++){
    cin>>arr[i];
}
float runs = 0, ans = 0;
for(int i = 0; i < n; i++){
    runs += arr[i];
    float balls = i + 1;
    float sr = (runs/balls)*100;
    if(sr == 100){
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
