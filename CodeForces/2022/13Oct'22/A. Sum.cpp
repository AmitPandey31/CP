#include <bits/stdc++.h>
using namespace std;

void solve(){
int a,b,c;
cin>>a>>b>>c;
if(a + b == c){
    cout<<"YES"<<endl;
} else if (b + c == a){
    cout<<"YES"<<endl;
} else if ( c + a == b){
    cout<<"YES"<<endl;
} else{
    cout<<"NO"<<endl;
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




