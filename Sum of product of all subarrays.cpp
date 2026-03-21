/* Key Recurrence
Let: last = sum of products of all subarrays ending at i
Then: last = last×a[i]+a[i]
Extend previous subarrays → multiply by a[i]
Start new subarray → + a[i].
*/
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
    int last = 0;

    for(int i = 0; i < n; i++) {
        last = last * a[i] + a[i];
        ans += last;
    }

    cout << ans << "\n";

    return 0;
}