#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define modd 998244353
using vll = vector<ll>;
 
 
void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll sm=0;
    ll neg=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sm+=arr[i];
        if(arr[i]==-1) neg++;
    }
    if(n%2==1) {cout<<"NO"<<endl;return;}
    if(sm==0) {cout<<"YES"<<endl;return;}
    if((n/2)%2==0 && neg%2==0){
        cout<<"YES"<<endl;return;
    }
    if((n/2)%2==1 && neg%2==1){
        cout<<"YES"<<endl;return;
    }
    else {cout<<"NO"<<endl;return;}
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}