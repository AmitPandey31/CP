#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,c;
    cin>>n>>c;
    vector<int> orbits(n);
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++){
        cin>>orbits[i];
    }
    sort(orbits.begin(),orbits.end());
    for(int i=0; i<n; i++){
        mp[orbits[i]]++;
    }
    int count = 0;
    for(int x =0; x<mp.size();x++){
        int select = min(c,x.second);
        count=count+select;
    }
    cout<<count<<endl;
}

int main()
{
    int t; cin>>t;
    while(t--){
        solve();
    }

    return 0;
}