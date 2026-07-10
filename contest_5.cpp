#include <iostream>
using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;

int main() {

    int n;
    cin >> n;

    ll fact = 1;    
    for (int i = 2; i <= n - 1; ++i) {
        fact = (fact * i) % MOD;
    }

    ll ans = fact * ((MOD + 1) / 2) % MOD;
    cout << ans << '\n';

    return 0;
}
