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
    vector <ll> a(n);
    for (ll i=0;i<n;i++){
        cin>>a[i];
    }
    vector <ll> b(n);
    for (ll i=0;i<n;i++){
        cin>>b[i];
    }
    ll itr=0;
    while(true){
        ll f=0;
        for (int i=0;i<n;i++){
            if(a[i]>b[i]){
                a[i]--;
                f++;
                break;
            }
            if(a[i]<b[i]){
                b[i]++;
                
            }
        }
        itr++;
        if(f==0){
            cout<<itr<<endl;
            return;
        }
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