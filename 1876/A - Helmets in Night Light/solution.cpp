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
    vector<ll> a(n);
    
    for (ll i=0;i<n;i++){
        cin>>a[i];
    }
    vector <ll> b(n);
    
    for (ll i=0;i<n;i++){
        cin>>b[i];
    }
    vector <pair<ll,ll>> hello(n);
    for(ll i=0;i<n;i++){
        hello[i]={a[i],b[i]};
    }
 
   sort(hello.begin(), hello.end(), [](auto &x1, auto &x2) {
    if (x1.second != x2.second)
        return x1.second < x2.second;  // primary sort by .second
    return x1.first < x2.first;        // tie-break by .first
});
 
 
    ll ppl=1;
    ll ans=k;
    for (ll i=0;i<n;i++){
        if(hello[i].second<k){
            if((n-ppl)>=hello[i].first){
                ans+=hello[i].first*hello[i].second;
                ppl+=hello[i].first;
            }
            else{
                ans+=(n-ppl)*hello[i].second;
                ppl+=(n-ppl);
            }
 
        }
        else{
            break;
        }
    }
    if(n-ppl>0){
        ans+=k*(n-ppl);
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