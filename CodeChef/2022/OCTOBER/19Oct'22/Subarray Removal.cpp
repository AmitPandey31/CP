#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,array,cnt0,cnt1,count,sum;
    cin>>n;
    sum=cnt0=cnt1=0;
    for(int i = 0; i< n ; ++i){
        cin>>array;
        cnt0 += (array==0);
        cnt1 += (array==1);
        count = min(cnt0,cnt1);
        cnt0 -= count; 
        cnt1 -= count;
        sum += count;
    }
    cout<<sum + cnt1/3<<endl;
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
