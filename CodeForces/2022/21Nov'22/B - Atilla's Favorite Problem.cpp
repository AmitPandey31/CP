#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    long long ans;
    // for(int i = 0; i < n; ++i){
    //     ans = max(ans, int(s[i] - 'a'));
    // }
    // cout<<ans+1<<endl;
    sort(str.begin(), str.end());
    ans = str[n-1] - 'a';
    cout<<ans+1<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}