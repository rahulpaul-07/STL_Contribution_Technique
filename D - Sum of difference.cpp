/*prefix[i]=A[0]+A[1]+⋯+A[i−1]
We want to compute for each index i:
(A[i]−A[0])+(A[i]−A[1])+⋯+(A[i]−A[i−1])
This is all pairs where A[i] is the bigger element.
=(A[i]+A[i]+⋯+A[i])−(A[0]+A[1]+⋯+A[i−1])
There are i copies of A[i], so:
=i⋅A[i]−prefix[i]
We can compute the sum of all pairs where A[i] is the bigger element by summing this expression for all i:
∑i=0n−1(i⋅A[i]−prefix[i])

contribution at i=A[i]⋅i−prefix[i]
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
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Step 1: Sort the array
    sort(a.begin(), a.end());

    // Step 2: Use prefix sum technique
    int ans = 0;
    int prefix = 0;

    for(int i = 0; i < n; i++) {
        ans += a[i] * i - prefix;
        prefix += a[i];
    }

    cout << ans << "\n";

    return 0;
}