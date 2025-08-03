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
    ll n,x;
    cin>>n>>x;
    vector <ll> arr(n);
    ll sum=0;
    ll mx=0;
    for (ll i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        mx+=(arr[i]+x-1)/x;
    }
    cout<<(sum+x-1)/x<<" "<<mx<<endl;
 
 
    
    
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