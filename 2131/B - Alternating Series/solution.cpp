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
    for (ll i=0;i<n-1;i++){
        if(i%2==0){
            cout<<-1<<" ";
        }
        else{
            cout<<3<<" ";
        }
    }
    if(n%2==0){
        cout<<2;
    }
    else{
        cout<<-1;
    }
    cout<<endl;
 
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