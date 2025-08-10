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
    vector<ll> S(n);
    for (ll i=0;i<n;i++){
        cin>>S[i];
    }
    vector<ll> T(n);
    for (ll i=0;i<n;i++){
        cin>>T[i];
    }
    map<ll,ll> mpp1;
    map<ll,ll> mpp2;
    for (ll i=0;i<n;i++){
        mpp1[min(S[i]%k,k-(S[i]%k))]++;
    }
 
    for (ll i=0;i<n;i++){
        mpp2[min(T[i]%k,k-(T[i]%k))]++;
    }
    if(mpp1==mpp2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
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