#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define modd 998244353
using vll = vector<ll>;
 
void solve() {
    ll n;
    cin >> n;
    string s;
    cin>>s;
    vector<int> one(n),zero(n);
    if(s[0]=='1') one[0]=1;
    else zero[0]=1;
    for(int i=1;i<n;i++){
        if(s[i]=='1'){
            one[i]=one[i-1]+1;
            zero[i]=zero[i-1];
        }
        else{
            zero[i]=zero[i-1]+1;
            one[i]=one[i-1];
        }
    }
    if(s[0]=='1'){
        cout<<zero[n-1]<<endl;
        return;
    }
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        int rightzro=zero[n-1]-zero[i];
        int leftone=one[i];
        ans=min(ans,rightzro+leftone);
 
    }
    cout<<ans<<endl;
    
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