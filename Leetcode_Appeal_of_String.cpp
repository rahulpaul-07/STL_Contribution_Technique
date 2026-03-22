#include <bits/stdc++.h>
using namespace std;

#define int long long

long long appealSum(string s) {
    int n = s.length();
    long long ans = 0;

    for(char ch = 'a'; ch <= 'z'; ch++) {
        long long contrib = 1LL * n * (n + 1) / 2;

        int last = -1;

        for(int i = 0; i < n; i++) {
            if(s[i] == ch) {
                int len = i - last - 1;

                if(len > 0) {
                    contrib -= 1LL * len * (len + 1) / 2;
                }

                last = i;
            }
        }

        // handle suffix after last occurrence
        int len = n - last - 1;
        if(len > 0) {
            contrib -= 1LL * len * (len + 1) / 2;
        }

        ans += contrib;
    }

    return ans;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    cout << appealSum(s) << "\n";

    return 0;
}