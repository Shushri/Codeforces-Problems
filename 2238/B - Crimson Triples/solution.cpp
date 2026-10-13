#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define modd 998244353
using vll = vector<ll>;
 
 
void solve() {
    ll n;
    cin >> n;
    ll ans=0;
    for(int i=1;i<=n;i++){
        ll s=n/i;
        ans+=s*s;
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