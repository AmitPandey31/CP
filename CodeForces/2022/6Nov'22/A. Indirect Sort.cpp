#include <bits/stdc++.h>

using namespace std;

void solve(){
    int len;
    cin>>len;
    vector<int> array(len);
    for(int i = 0; i < len; ++i){ cin>>array[i];}
    int firstElement = array[0];
    if(firstElement == 1) { cout<<"YES"<<endl; }
    else {cout<<"NO"<<endl;}
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