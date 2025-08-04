#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<ll>;
using vl = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;
 
void solve() {
    ll n,k;
    cin>>n>>k;
    ll p=n*k;
    vector <ll> arr(p);
    for (ll i=0;i<p;i++){
        cin>>arr[i];
    }
    ll med=n/2;
    ll sum=0;
    ll i=n*k-med-1;
    while(k--){
        
        sum+=arr[i];
        i=i-med-1;
    }
    cout<<sum<<endl;
 
 
    
    
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