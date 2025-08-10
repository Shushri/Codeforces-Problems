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
    vector <ll> arr(n);
    for (ll i=0;i<n;i++){
        cin>>arr[i];
    }
    if(k==4){
        ll c=0;
        ll mn4=2;
        for (ll i=0;i<n;i++){
            if(arr[i]%4==0){
                cout<<0<<endl;
                return;
            }
            else if(arr[i]%2==0){
                c++;
            }
            
            mn4=min(mn4,k-(arr[i]%k));
            
            if(c==2){
                cout<<0<<endl;
                return;
            }
 
        }
        if(c==1 && mn4==2 && n>1){
            cout<<1<<endl;
            return;
        }
        cout<<mn4<<endl;
        return;
    }
 
    ll mn=5;
    for (ll i=0;i<n;i++){
        if(arr[i]%k==0){
            cout<<0<<endl;
            return;
        }
        ll left=k-(arr[i]%k);
        mn=min(mn,left);
    }
    cout<<mn<<endl;
 
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