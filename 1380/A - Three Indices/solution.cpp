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
    vector <ll> arr(n);
    for (ll i=0;i<n;i++){
        cin>>arr[i];
    }
    for (ll i=1;i<n-1;i++){
        if(arr[i-1]<arr[i] && arr[i+1]<arr[i]){
            cout<<"YES"<<endl;
            cout<<i-1+1<<" "<<i+1<<" "<<i+1+1<<endl;
            return;
        }
    }
 
    cout<<"NO"<<endl;
    
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