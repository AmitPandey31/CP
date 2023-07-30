#include <bits/stdc++.h>

using namespace std;
void solve(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){
            if(j == 0 || j == i){
                cout<<1<<" ";
            } else {
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
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