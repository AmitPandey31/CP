#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int ar[n];
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>ar[i]; 
    }
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    if(ar[0]!=arr[0] or ar[n-1]!=arr[n-1])
    {
        cout<<"NO\n";
        return;
    }
    int one=0; int two=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==0) one++;
        else two++;
    }
    for(int i=1;i<n-1;i++)
    {
        if(ar[i]!=arr[i] && ar[i]==0 && two==0)
        {
            cout<<"NO\n";
            return;
        }
        if(ar[i]!=arr[i] && ar[i]==1)
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    return;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
 return 0;
}