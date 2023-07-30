#include <bits/stdc++.h>
using namespace std;
 
void solve(){
int n;
cin>>n;
int arr[n];
int result = 0;
for(int i = 0; i < n; ++i){
    cin>>arr[i];
}
int  count = 0;
 for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            count = 0;
        else
        {
            count++;
            result = max(result, count);
        }
    }
cout<<result<<endl;
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