/* prev = sum of all subarrays ending at index i-1
Then for index i: prev=prev+(i+1)×a[i]
All previous subarrays extend → contribute prev
New subarrays ending at i → (i+1) * a[i]
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
    int prev = 0;

    for(int i = 0; i < n; i++) {
        prev = prev + (i + 1) * a[i];
        ans += prev;
    }

    cout << ans << "\n";

    return 0;
}
