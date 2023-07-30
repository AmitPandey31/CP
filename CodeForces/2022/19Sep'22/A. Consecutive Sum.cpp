#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace chrono;
using namespace __gnu_pbds;

template<class T> using ordered_set = tree<T, null_type, greater_equal<T>, rb_tree_tag,
tree_order_statistics_node_update>;

#define int long long 
#define all(x) x.begin(),x.end()
const int mod = 1000000007;

void solve(){

long long n,k; cin>>n>>k;
    vector<long long> a(n),ans(k);

    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n;i++){
        ans[(i+1)%k]=max(ans[(i+1)%k],a[i]);
    }

    long long out=0;

    for(int i=0;i<k;i++) out+=ans[i];

    cout<<out<<endl;
}

signed main(){
    int tc=1;
    cin>>tc;
    for(int i=1;i<=tc;i++){
        solve();
    }
    return 0;
}
