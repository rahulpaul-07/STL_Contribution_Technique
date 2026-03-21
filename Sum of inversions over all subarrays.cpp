/* For every pair (i, j) such that:
i < j
a[i] > a[j] (an inversion)

This pair contributes to all subarrays that include both i and j.
Number of such subarrays: (i + 1) * (n - j)
i + 1: choices for the starting index of the subarray (from 0 to i)
n - j: choices for the ending index of the subarray (from j to n-1)
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

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] > a[j]) {
                int left = i + 1;     // choices for start
                int right = n - j;    // choices for end
                ans += left * right;
            }
        }
    }

    cout << ans << "\n";

    return 0;
}