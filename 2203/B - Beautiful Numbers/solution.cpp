#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define modd 998244353
using vll = vector<ll>;
 
 
void solve() {
    ll n;
    cin >> n;
    string s=to_string(n);
    if(s.size()==1){
        cout<<0<<endl;
        return;
    }
    vector<ll> arr;
    for(ll i=1;i<s.size();i++){
        arr.push_back((ll)(s[i]-'0'));
    }
    sort(arr.begin(),arr.end());
    
    ll sm=0;
    ll cnt=-1;
    for(ll i=0;i<arr.size();i++){
        sm+=arr[i];
        if(sm>=9){
            sm=sm-arr[i];
            cnt=i;
            break;
        }
    }
    if(cnt==-1 ) {
        if((sm+(ll)(s[0]-'0'))<10)
        {cout<<0<<endl;return;}
        else{
            cout<<1<<endl;return;
        }
    }
    if((sm+(ll)(s[0]-'0'))<10){
        cout<<s.size()-cnt-1<<endl;
        return;
 
    }
    else{
        cout<<s.size()-cnt<<endl;
        return;
    }
 
    
    
    cout<<0<<endl;
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