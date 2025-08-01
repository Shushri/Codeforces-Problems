#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll a,b;
    cin >> a>>b;
    ll diff=abs(a-b);
    if(diff==0){
        cout<<0<<" "<<0<<endl; 
    }
    else{
        ll ad=a%diff;
        cout<<diff<<" "<<min(ad,diff-ad)<<endl;
    }
    
    
}
int main(){
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}