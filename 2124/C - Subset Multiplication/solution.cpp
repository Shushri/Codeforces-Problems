#include <bits/stdc++.h>
using namespace std;
 
using ll = long long int;
using vi = vector <int>;
using vl = vector <ll>;
using pii = pair <int,int>;
using pll = pair <ll, ll>;
using vpii = vector <pii>;
using vpll = vector <pll>;
 
void solve () {
    ll n; 
    cin >> n;
    vl b(n);
    for (ll i = 0; i < n; i++) {
        cin >> b[i];
    }
 
    ll c = 1;
    for (ll i = 0; i < n-1; i++) {
        if (b[i+1]%b[i] != 0) {
            b[i] /= c;
            if (b[i+1]%b[i] != 0) {
                ll d = b[i]/__gcd(b[i], b[i+1]);
                c *= d;
            }
        }
    }
    cout << c << '\n';
}
 
int main () {
 
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
    ll t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}