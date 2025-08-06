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
   ll c=0;
   if(n==1){
    cout<<0<<endl;
    return;
   }
   while(n>1){
    if(n%6==0){
        n=n/6;
        c++;
    }
    else if(n%3==0 && n%2!=0){
        n=n*2;
        c++;
    }
    else{
        break;
    }
    
 
   }
   if(n==1){
        cout<<c<<endl;
        return;
    }
    else{
        cout<<-1<<endl;
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