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
    ll c1=0;
    ll c0=0;
    for (ll i=0;i<s.size();i++){
        if(s[i]=='1'){
            c1++;
        }
        else{
            c0++;
        }
    }
    if(c1==c0){
        cout<<0<<endl;
        return;
    }
    if(c1==s.size() || c0==s.size()){
        cout<<s.size()<<endl;
        return;
    }
    string ans=s;
    ll s0=c0;
    ll s1=c1;
    ll count=0;
    for (ll i=s.size()-1;i>=0;i--){
        if(s[i]=='0'){
            c0--;
            
        }
        else{
            c1--;
        }
        if(s0>c1){
            s0--;
        }
        else if(s1>c0){
            s1--;
        }
        count++;
        if(s0==c1 && c0==s1){
            break;
        }
    }
    cout<<count<<endl;
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}