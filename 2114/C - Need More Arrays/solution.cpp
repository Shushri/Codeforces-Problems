#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define modd 998244353
using vll = vector<ll>;
 
void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    stack<ll> st;
    st.push(arr[0]);
    for(int i=1;i<n;i++){
        if(arr[i]>st.top()+1){
            st.push(arr[i]);    
        }
    }
    cout<<st.size()<<endl;
    
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