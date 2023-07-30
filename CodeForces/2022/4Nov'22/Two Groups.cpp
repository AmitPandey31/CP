#include <bits/stdc++.h>

using namespace std;

void solve(){
    int len;
    cin>>len;
    vector<int> s(len);
    long long sum = 0;
    for(int i = 0; i < len; ++i){
        cin>>s[i];
        sum+=s[i];
    }
cout<<abs(sum)<<endl;
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