#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin>>n;
    int offdays = 3,firstday = 1, lastday=1;
    int ans = (n/offdays) - (firstday+lastday);
    cout<<ans<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--){
        solve();
    }

    return 0;
}