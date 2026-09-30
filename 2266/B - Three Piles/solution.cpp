#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define modd 998244353
using vll = vector<ll>;
 
void solve() {
    ll a,b,c;
    cin >> a>>b>>c;
    
    if(a>b){
        cout<<a+c-b<<endl;
        return;
    }
    if(a==b){
        cout<<c<<endl;
        return;
    }
    int diff=abs(a-b);
    int diff2=a+c-b;
    cout<<max(diff,diff2)<<endl;
    return;
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