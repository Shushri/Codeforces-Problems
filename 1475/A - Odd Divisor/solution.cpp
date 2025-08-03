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
    if(n==1){
        cout<<"NO"<<endl;
        return;
    }
    if(n%2==1){
        cout<<"YES"<<endl;
        return;
    }
    while(n){
        n=n/2;
        if(n==1){
            cout<<"NO"<<endl;
            return;
        }
        if(n%2==1){
            cout<<"YES"<<endl;
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