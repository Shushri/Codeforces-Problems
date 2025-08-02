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
    ll n,m,i,j;
    cin>>n>>m>>i>>j;
    if(i==1){
        cout<<n<<" "<<1<<" "<<n<<" "<<m<<endl;
        return;
    }
    else if(j==1){
        cout<<1<<" "<<m<<" "<<n<<" "<<m<<endl;
        return;
    }
    else{
        cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
        return;
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