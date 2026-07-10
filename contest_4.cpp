#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
const ll mod = 1e9+7;

ll mod_pow(ll a, ll n) {
    ll res = 1;
    a %= mod;
    while (n > 0) {
        if (n & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        n >>= 1;
    }
    return res;
}

int main(){
    ll n;
    cin >> n;
    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        x %= mod;
        if (x < 0) x += mod;
        sum = (sum + x) % mod;
    }
    ll ans = (sum * mod_pow(2, n-1)) % mod;
    cout << ans << endl;
    return 0;
}
