#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int ans = 0;

    for(int i = 0; i < n; i++) {
        int left = i + 1;        // choices to start before or at i
        int right = n - i;       // choices to end after or at i

        ans += a[i] * left * right;
    }

    cout << ans << "\n";

    return 0;
}