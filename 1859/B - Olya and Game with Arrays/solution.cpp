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
    ll n;
    cin>>n;
    vector <vector<ll>> arr(n);
    for (ll i=0;i<n;i++){
        ll s;
        cin>>s;
        vector <ll> a(s);
        for (ll j=0;j<s;j++){
            cin>>a[j];
        }
        sort(a.begin(),a.end());
        arr[i]=a;
 
    }
    ll mn=arr[0][0];
    ll mn2=arr[0][1];
    ll ans=0;
    for (ll i=0;i<n;i++){
        mn=min(mn,arr[i][0]);
        if(arr[i].size()>1){
            mn2=min(mn2,arr[i][1]);
            ans+=arr[i][1];
        }
        else{
            ans+=arr[i][0];
        }
        
        
    }
    cout<<ans-mn2+mn<<endl;
 
 
 
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