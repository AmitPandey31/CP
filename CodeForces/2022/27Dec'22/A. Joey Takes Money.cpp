#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
    long long int n;
    cin>>n;
    vector<long long int> ar(n);
    for(int i = 0; i < n; ++i){
        cin>>ar[i];
    }
    // sort(ar.begin(), ar.end());
    long long int y = 1;
    for(int i = 0; i < n; ++i){
        y *= ar[i];
    }
    y += n-1;
    cout<<y*2022<<endl;
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