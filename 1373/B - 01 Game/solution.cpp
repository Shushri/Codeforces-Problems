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
    string s;
    cin>>s;
    ll one=0;
    for (ll i=0;i<s.size();i++){
        if(s[i]=='1'){
            one++;
        }
    }
    ll zero=s.size()-one;
    if(min(one,zero)%2==1){
        cout<<"DA"<<endl;
    }
    else{
        cout<<"NET"<<endl;
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