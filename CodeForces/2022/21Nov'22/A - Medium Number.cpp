#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b and a<c){
        cout<<a<<endl;
    } 
    else if (a<b and a>c){
        cout<<a<<endl;
    }
    else if (b>a and b<c)
    {
        cout<<b<<endl;
    } else if (b<a and b>c){
        cout<<b<<endl;
    }
    else if(c>a and c<b)
    {
        cout<<c<<endl;
    }
    else{
        cout<<c<<endl;
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