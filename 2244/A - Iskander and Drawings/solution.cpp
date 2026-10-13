#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define modd 998244353
using vll = vector<ll>;
 
 
void solve() {
    ll n;
    cin >> n;
    string s;cin>>s;
    int l=0;
    int mx=0;
    for(int i=0;i<n;i++){
        if(s[i]=='#'){
            l++;
        }
        else{
            mx=max(mx,l);
            l=0;
            
        }
    }
    mx=max(mx,l);
    cout<<(mx+1)/2<<endl;
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