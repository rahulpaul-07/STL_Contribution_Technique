#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9 + 7;

// Fast exponentiation
int mod_exp(int base, int exp) {
    int res = 1;
    base %= MOD;

    while(exp > 0) {
        if(exp & 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return res;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int ans = 1;

    for(int i = 0; i < n; i++) {
        int cnt = (i + 1) * (n - i);   // contribution count
        ans = (ans * mod_exp(a[i], cnt)) % MOD;
    }

    cout << ans << "\n";

    return 0;
}