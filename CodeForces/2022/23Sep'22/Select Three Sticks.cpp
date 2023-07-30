#include <bits/stdc++.h>

using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
   for(int i = 0; i<n ;i++){
        cin>>a[i];
    }
    int m=INT_MAX;
    sort(a.begin(), a.end());
    
    for(int i = 0; i < n-2; i++){
        int sum = abs(a[i]-a[i+1]);
        sum+=abs(a[i+1] - a[i+2]);
        m = min(m,sum);
    }
    cout<<m<<endl;
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