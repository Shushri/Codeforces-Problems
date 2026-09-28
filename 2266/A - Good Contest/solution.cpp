#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define modd 998244353
using vll = vector<ll>;
 
void solve() {
    ll n;
    cin >> n;
    vll a(3);
    ll ans=0;
    for (ll i = 0; i < 3; i++) {
         cin >> a[i];
         ans=max(ans,n-a[i]);
        
    }
    cout<<ans<<endl;
    
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