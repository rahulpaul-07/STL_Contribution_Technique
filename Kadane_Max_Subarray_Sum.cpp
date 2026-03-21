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

    int ans = LLONG_MIN;
    int last = 0;

    for(int i = 0; i < n; i++) {
        last = max(a[i], last + a[i]);
        ans = max(ans, last);
    }

    cout << ans << "\n";

    return 0;
}